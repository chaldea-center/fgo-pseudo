void __fastcall QuestRestrictionInfo___ctor(QuestRestrictionInfo_o *this, int32_t questId, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.questId = questId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_31223888(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  QuestRestrictionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v12; // x4
  struct RestrictionEntity_array *RestrictionList_31224096; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t v20; // w1
  const MethodInfo *v21; // x4

  if ( (byte_40FD586 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FD586 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (QuestRestrictionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  RestrictionList_31224096 = QuestRestrictionMaster__getRestrictionList_31224096(
                               MasterData_WarQuestSelectionMaster,
                               &this->fields.questRestrictionEntityList,
                               questId,
                               questPhase,
                               v12);
  this->fields.restrictionEntityList = RestrictionList_31224096;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.restrictionEntityList,
    (System_Int32_array **)RestrictionList_31224096,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  QuestRestrictionInfo__Setup(this, v20, questId, questPhase, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo___ctor_31233524(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        RestrictionEntity_o *overwriteRestiction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  struct QuestRestrictionEntity_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x2
  __int64 v21; // x0
  __int64 v22; // x23
  __int64 v23; // x0
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
  int32_t v37; // w1
  const MethodInfo *v38; // x4

  if ( (byte_40FD587 & 1) == 0 )
  {
    sub_B16FFC(&QuestRestrictionEntity___TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&RestrictionEntity___TypeInfo, v11);
    byte_40FD587 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.questId = questId;
  this->fields.questPhase = questPhase;
  v13 = (struct QuestRestrictionEntity_array *)sub_B17014(QuestRestrictionEntity___TypeInfo, 0LL, v12);
  this->fields.questRestrictionEntityList = v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionEntityList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( overwriteRestiction )
  {
    v21 = sub_B17014(RestrictionEntity___TypeInfo, 1LL, v20);
    if ( !v21 )
      sub_B170D4();
    v22 = v21;
    v23 = sub_B170BC(overwriteRestiction, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
    if ( !v23 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
    if ( !*(_DWORD *)(v22 + 24) )
    {
      sub_B17100(v23, v24, v25);
      sub_B170A0();
    }
    *(_QWORD *)(v22 + 32) = overwriteRestiction;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v22 + 32),
      (System_Int32_array **)overwriteRestiction,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  else
  {
    v22 = sub_B17014(RestrictionEntity___TypeInfo, 0LL, v20);
  }
  this->fields.restrictionEntityList = (struct RestrictionEntity_array *)v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.restrictionEntityList,
    (System_Int32_array **)v22,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  QuestRestrictionInfo__Setup(this, v37, questId, questPhase, v38);
}


void __fastcall QuestRestrictionInfo__CheckFixedServantPosition(
        QuestRestrictionInfo_o *this,
        bool *isFixedServantPositionRestriction,
        bool *isFixedServantPositionAgreement,
        bool *isRestrictionMyServantPos,
        bool *isRestrictionNeedStarting,
        bool *isRestrictionServantPos,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimit,
        int32_t num,
        bool isFollower,
        const MethodInfo *method)
{
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  bool *v30; // x23
  ServantEntity_o *Entity; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  struct System_Collections_Generic_List_bool____o *myServantPositionsList; // x21
  __int64 v36; // x24
  int size; // w8
  System_Boolean_array *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *FixedServantPositionSvtIdList; // x0
  BalanceConfig_c *v40; // x0
  struct System_Collections_Generic_List_bool____o *v41; // x21
  System_Boolean_array *v42; // x8
  _BOOL4 v43; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  struct System_Collections_Generic_List_bool____o *v45; // x21
  System_Boolean_array *v46; // x8
  bool *v47; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  bool *v49; // x23
  struct System_Collections_Generic_List_bool____o *positionsList; // x21
  __int64 v51; // x24
  int v52; // w8
  System_Boolean_array *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *FixedPositionSvtIdList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  struct System_Collections_Generic_List_bool____o *v56; // x21
  System_Boolean_array *v57; // x8
  _BOOL4 v58; // w8
  bool *v59; // [xsp+0h] [xbp-60h]
  System_Collections_Generic_IEnumerable_TSource__o *second; // [xsp+8h] [xbp-58h]

  if ( (byte_40FD5A0 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, isFixedServantPositionRestriction);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_int___, v22);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v23);
    sub_B16FFC(&Method_System_Linq_Enumerable_Intersect_int___, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool____get_Count__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool____get_Item__, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    byte_40FD5A0 = 1;
  }
  *isFixedServantPositionRestriction = 0;
  *isFixedServantPositionAgreement = 0;
  *isRestrictionMyServantPos = 0;
  *isRestrictionNeedStarting = 0;
  *isRestrictionServantPos = 0;
  if ( !this->fields.restrictionBaseEntity )
  {
    FixedServantPositionSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
                                                                                           this,
                                                                                           (const MethodInfo *)isFixedServantPositionRestriction);
    if ( FixedServantPositionSvtIdList )
    {
      if ( System_Linq_Enumerable__Contains_int_(
             FixedServantPositionSvtIdList,
             svtId,
             (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        v40 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v40 = BalanceConfig_TypeInfo;
        }
        *isFixedServantPositionRestriction = v40->static_fields->DeckMainMemberMax <= num;
        *isFixedServantPositionAgreement = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax > num;
      }
      else
      {
        *isFixedServantPositionRestriction = 0;
        *isFixedServantPositionAgreement = 0;
      }
    }
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  v59 = isRestrictionNeedStarting;
  v30 = isRestrictionServantPos;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_17;
  Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                         Entity,
                                                                         limitCount,
                                                                         dispLimit,
                                                                         0LL);
  second = Individuality;
  if ( !this->fields.isFixedMyServantPosition )
    goto LABEL_44;
  myServantPositionsList = this->fields.myServantPositionsList;
  if ( !myServantPositionsList )
    goto LABEL_17;
  v36 = 0LL;
  while ( 1 )
  {
    size = myServantPositionsList->fields._size;
    if ( (int)v36 >= size )
      break;
    if ( size <= (unsigned int)v36 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v38 = myServantPositionsList->fields._items->m_Items[v36];
    if ( !v38 )
      goto LABEL_17;
    if ( v38->max_length <= num )
      goto LABEL_80;
    if ( v38->m_Items[num + 4] )
      goto LABEL_25;
    myServantPositionsList = this->fields.myServantPositionsList;
    ++v36;
    if ( !myServantPositionsList )
      goto LABEL_17;
  }
  LODWORD(v36) = 0;
LABEL_25:
  if ( isFollower )
  {
    v41 = this->fields.myServantPositionsList;
    if ( !v41 )
      goto LABEL_17;
    if ( v41->fields._size <= (unsigned int)v36 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v42 = v41->fields._items->m_Items[(int)v36];
    if ( !v42 )
      goto LABEL_17;
    if ( v42->max_length <= num )
      goto LABEL_80;
    v43 = v42->m_Items[num + 4];
  }
  else
  {
    Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(
                                                                           this,
                                                                           (int32_t)v33,
                                                                           v34);
    if ( !Individuality )
      goto LABEL_44;
    v44 = System_Linq_Enumerable__Intersect_int_(
            Individuality,
            second,
            (const MethodInfo_18D894C *)Method_System_Linq_Enumerable_Intersect_int___);
    Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Any_int_(
                                                                           v44,
                                                                           (const MethodInfo_18C7BC4 *)Method_System_Linq_Enumerable_Any_int___);
    v45 = this->fields.myServantPositionsList;
    if ( !v45 )
      goto LABEL_17;
    if ( v45->fields._size <= (unsigned int)v36 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v46 = v45->fields._items->m_Items[(int)v36];
    if ( !v46 )
      goto LABEL_17;
    if ( v46->max_length <= num )
      goto LABEL_80;
    v43 = v46->m_Items[num + 4];
    if ( ((unsigned __int8)Individuality & 1) != 0 )
    {
      if ( !v43 )
        goto LABEL_44;
      *isFixedServantPositionAgreement = 1;
      goto LABEL_43;
    }
  }
  if ( !v43 )
    goto LABEL_44;
  *isFixedServantPositionRestriction = 1;
  *isFixedServantPositionAgreement = 0;
LABEL_43:
  *isRestrictionMyServantPos = 1;
LABEL_44:
  if ( *isFixedServantPositionRestriction )
    return;
  v47 = v30;
  if ( this->fields.isNeedStarting )
  {
    Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetNeedStartingSvtIdList(
                                                                           this,
                                                                           v33);
    if ( Individuality )
    {
      v48 = System_Linq_Enumerable__Intersect_int_(
              Individuality,
              second,
              (const MethodInfo_18D894C *)Method_System_Linq_Enumerable_Intersect_int___);
      Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Any_int_(
                                                                             v48,
                                                                             (const MethodInfo_18C7BC4 *)Method_System_Linq_Enumerable_Any_int___);
      if ( ((unsigned __int8)Individuality & 1) != 0 )
      {
        Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v49 = v59;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo;
          }
        }
        else
        {
          v49 = v59;
        }
        *isFixedServantPositionRestriction = *((_DWORD *)Individuality[11].monitor + 40) <= num;
        *isFixedServantPositionAgreement = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax > num;
        *v49 = 1;
      }
    }
  }
  if ( *isFixedServantPositionRestriction || !this->fields.isFixedPosition )
    return;
  positionsList = this->fields.positionsList;
  if ( !positionsList )
    goto LABEL_17;
  v51 = 0LL;
  while ( 1 )
  {
    v52 = positionsList->fields._size;
    if ( (int)v51 >= v52 )
      break;
    if ( v52 <= (unsigned int)v51 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v53 = positionsList->fields._items->m_Items[v51];
    if ( !v53 )
      goto LABEL_17;
    if ( v53->max_length <= num )
      goto LABEL_80;
    if ( v53->m_Items[num + 4] )
      goto LABEL_68;
    positionsList = this->fields.positionsList;
    ++v51;
    if ( !positionsList )
      goto LABEL_17;
  }
  LODWORD(v51) = 0;
LABEL_68:
  FixedPositionSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)QuestRestrictionInfo__GetFixedPositionSvtIdList(
                                                                                  this,
                                                                                  (int32_t)v33,
                                                                                  v34);
  if ( !FixedPositionSvtIdList )
    return;
  v55 = System_Linq_Enumerable__Intersect_int_(
          FixedPositionSvtIdList,
          second,
          (const MethodInfo_18D894C *)Method_System_Linq_Enumerable_Intersect_int___);
  Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Any_int_(
                                                                         v55,
                                                                         (const MethodInfo_18C7BC4 *)Method_System_Linq_Enumerable_Any_int___);
  v56 = this->fields.positionsList;
  if ( !v56 )
    goto LABEL_17;
  if ( v56->fields._size <= (unsigned int)v51 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v57 = v56->fields._items->m_Items[(int)v51];
  if ( !v57 )
LABEL_17:
    sub_B170D4();
  if ( v57->max_length <= num )
  {
LABEL_80:
    sub_B17100(Individuality, v33, v34);
    sub_B170A0();
  }
  v58 = v57->m_Items[num + 4];
  if ( ((unsigned __int8)Individuality & 1) != 0 )
  {
    if ( v58 )
    {
      *isFixedServantPositionAgreement = 1;
LABEL_79:
      *v47 = 1;
    }
  }
  else if ( v58 )
  {
    *isFixedServantPositionRestriction = 1;
    *isFixedServantPositionAgreement = 0;
    goto LABEL_79;
  }
}


bool __fastcall QuestRestrictionInfo__CheckMyServantNumRestriction(
        QuestRestrictionInfo_o *this,
        int32_t myServantNum,
        const MethodInfo *method)
{
  RestrictionEntity_o *myServantNumRestrictionEntity; // x0

  if ( this->fields.restrictionBaseEntity )
  {
    return this->fields.myServantNumMax >= myServantNum;
  }
  else
  {
    myServantNumRestrictionEntity = this->fields.myServantNumRestrictionEntity;
    return myServantNumRestrictionEntity
        && !RestrictionEntity__IsRestriction(myServantNumRestrictionEntity, myServantNum, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCount(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Int32_array *overwriteLimitCountSvtIds; // x11
  struct System_Int32_array *overwriteLimitCounts; // x8
  int max_length; // w10
  __int64 v6; // x9
  int32_t *v7; // x11

  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( !overwriteLimitCountSvtIds )
    return -1;
  overwriteLimitCounts = this->fields.overwriteLimitCounts;
  if ( !overwriteLimitCounts )
    return -1;
  max_length = overwriteLimitCountSvtIds->max_length;
  if ( max_length < 1 )
    return -1;
  v6 = 0LL;
  v7 = &overwriteLimitCountSvtIds->m_Items[1];
  while ( v7[v6] != svtId )
  {
    if ( (int)++v6 >= max_length )
      return -1;
  }
  if ( (unsigned int)v6 >= overwriteLimitCounts->max_length )
  {
    sub_B17100(this, *(_QWORD *)&svtId, method);
    sub_B170A0();
  }
  return overwriteLimitCounts->m_Items[v6 + 1];
}


int32_t __fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCount_31255552(
        QuestRestrictionInfo_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  const MethodInfo *v8; // x2
  System_Int32_array *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x8
  System_Int32_array *v13; // x20
  __int64 v14; // x25
  int32_t v15; // w21
  __int64 v16; // x22
  __int64 v17; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40FD5A9 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userServantEntity);
    byte_40FD5A9 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_22;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v6;
  *(_QWORD *)&v19.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL);
  v9 = QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(this, v7, v8);
  if ( !v9 )
LABEL_22:
    sub_B170D4();
  v12 = *(_QWORD *)&v9->max_length;
  v13 = v9;
  if ( !v12 )
    return -1;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( (unsigned int)v14 < (unsigned int)v12 )
    {
      v15 = v13->m_Items[v14 + 1];
      v17 = *(_QWORD *)&userServantEntity->fields.dispLimitCount.fields.currentCryptoKey;
      v16 = *(_QWORD *)&userServantEntity->fields.dispLimitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v20.fields.currentCryptoKey = v17;
      *(_QWORD *)&v20.fields.fakeValue = v16;
      v9 = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
      if ( (_DWORD)v9 == v15 )
        return v15;
      v12 = *(_QWORD *)&v13->max_length;
      if ( (int)++v14 >= (int)v12 )
        goto LABEL_17;
    }
LABEL_21:
    sub_B17100(v9, v10, v11);
    sub_B170A0();
  }
LABEL_17:
  if ( !(_DWORD)v12 )
    goto LABEL_21;
  return v13->m_Items[1];
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestRestrictionInfo__ConvertOverwriteImageLimitCounts(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Int32_array *overwriteLimitCountSvtIds; // x8
  __int64 v15; // x9
  __int64 v16; // x22
  __int64 v17; // x23
  struct System_Int32_array *overwriteLimitCounts; // x8

  if ( (byte_40FD5A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_40FD5A8 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&svtId,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( overwriteLimitCountSvtIds )
  {
    if ( this->fields.overwriteLimitCounts )
    {
      v15 = *(_QWORD *)&overwriteLimitCountSvtIds->max_length;
      if ( (int)v15 >= 1 )
      {
        v16 = (int)v15;
        v17 = 8LL;
        do
        {
          if ( v17 - 8 >= (unsigned __int64)overwriteLimitCountSvtIds->max_length )
          {
LABEL_18:
            sub_B17100(v11, v12, v13);
            sub_B170A0();
          }
          if ( *((_DWORD *)&overwriteLimitCountSvtIds->obj.klass + v17) == svtId )
          {
            overwriteLimitCounts = this->fields.overwriteLimitCounts;
            if ( !overwriteLimitCounts )
              break;
            if ( v17 - 8 >= (unsigned __int64)overwriteLimitCounts->max_length )
              goto LABEL_18;
            if ( !v10 )
              break;
            System_Collections_Generic_List_int___Add(
              v10,
              *((_DWORD *)&overwriteLimitCounts->obj.klass + v17),
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          if ( v17 - 7 >= v16 )
            goto LABEL_16;
          overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
          ++v17;
        }
        while ( overwriteLimitCountSvtIds );
LABEL_15:
        sub_B170D4();
      }
    }
  }
LABEL_16:
  if ( !v10 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestRestrictionInfo__GetAllOutBattleGroupNo(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.allOutBattleGroupNo;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetConfirmRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        int32_t pos,
        bool isCheckPosForWhole,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v8; // x20
  __int64 v9; // x1
  int v10; // w8
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x9
  __int64 v12; // x22
  QuestRestrictionInfo_SlotInfo_o *v13; // x8
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x21
  int max_length; // w8
  unsigned int v16; // w22
  __int64 v17; // x23
  RestrictionWholeEntity_o *v18; // x25
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x26
  unsigned __int64 v21; // x27
  int v22; // w8
  System_String_o **p_summary; // x25
  unsigned int v24; // w9
  struct QuestRestrictionInfo_SlotInfo_array *v25; // x8
  QuestRestrictionInfo_SlotInfo_o *v26; // x8
  struct QuestRestrictionInfo_SlotInfo_array *v27; // x8
  QuestRestrictionInfo_SlotInfo_o *v28; // x8

  v8 = this;
  if ( (byte_40FD593 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&initPos);
    this = (QuestRestrictionInfo_o *)sub_B16FFC(&StringLiteral_1, v9);
    byte_40FD593 = 1;
  }
  if ( !v8->fields.restrictionBaseEntity )
    goto LABEL_38;
  v10 = initPos - 1;
  if ( initPos >= 1 )
  {
    slotInfos = v8->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_46;
    if ( v10 >= slotInfos->max_length )
      goto LABEL_45;
    v12 = v10;
    v13 = slotInfos->m_Items[v10];
    if ( !v13 )
      goto LABEL_46;
    this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v13->fields.summary, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v27 = v8->fields.slotInfos;
      if ( v27 )
      {
        if ( (unsigned int)v12 >= v27->max_length )
          goto LABEL_45;
        v28 = v27->m_Items[v12];
        if ( v28 )
        {
          p_summary = &v28->fields.summary;
          return *p_summary;
        }
      }
      goto LABEL_46;
    }
  }
  if ( !isCheckPosForWhole )
  {
    p_summary = (System_String_o **)&StringLiteral_1;
    return *p_summary;
  }
  if ( pos < 1 )
    goto LABEL_38;
  restrictionWholeEntities = v8->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_46:
    sub_B170D4();
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
  {
LABEL_38:
    p_summary = &v8->fields.confirmRestrictionMessage;
    return *p_summary;
  }
  v16 = 0;
  v17 = pos - 1;
  while ( 1 )
  {
    if ( v16 >= max_length )
      goto LABEL_45;
    v18 = restrictionWholeEntities->m_Items[v16];
    if ( !v18 )
      goto LABEL_46;
    type = v18->fields.type;
    if ( (unsigned int)(type - 4) >= 4 )
    {
      if ( type != 8 )
        goto LABEL_37;
      this = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
      }
      if ( this->fields.fixedSupportPositionRestrictionEntity[2].fields.type >= pos )
      {
        v25 = v8->fields.slotInfos;
        if ( !v25 )
          goto LABEL_46;
        if ( (unsigned int)v17 >= v25->max_length )
          goto LABEL_45;
        v26 = v25->m_Items[v17];
        if ( !v26 )
          goto LABEL_46;
        if ( v26->fields.slotType != 5 )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v18->fields.summary, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            break;
        }
      }
    }
    targetVals2 = v18->fields.targetVals2;
    if ( !targetVals2 )
      goto LABEL_46;
    if ( (unsigned int)*(_QWORD *)&targetVals2->max_length == 1 )
    {
      v21 = 0LL;
      v22 = 1;
      p_summary = &v18->fields.summary;
      v24 = 1;
      while ( v21 < v24 )
      {
        if ( targetVals2->m_Items[v21 + 1] == pos )
        {
          this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*p_summary, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            return *p_summary;
          v22 = targetVals2->max_length;
        }
        ++v21;
        v24 = v22;
        if ( (__int64)v21 >= v22 )
          goto LABEL_37;
      }
LABEL_45:
      sub_B17100(this, *(_QWORD *)&initPos, *(_QWORD *)&pos);
      sub_B170A0();
    }
LABEL_37:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v16 >= max_length )
      goto LABEL_38;
  }
  p_summary = &v18->fields.summary;
  return *p_summary;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestRestrictionInfo__GetCorrectionIconId(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        bool isFollower,
        const MethodInfo *method)
{
  struct System_Int32_array *overwriteLimitCountSvtIds; // x12
  struct System_Int32_array *overwriteLimitCountIconIds; // x8
  int max_length; // w10
  __int64 v7; // x11
  int32_t *p_correctionIconId; // x9
  int32_t *v9; // x12

  if ( !isFollower
    && (overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds) != 0LL
    && (overwriteLimitCountIconIds = this->fields.overwriteLimitCountIconIds) != 0LL
    && (max_length = overwriteLimitCountSvtIds->max_length, max_length >= 1) )
  {
    v7 = 0LL;
    p_correctionIconId = &overwriteLimitCountIconIds->m_Items[1];
    v9 = &overwriteLimitCountSvtIds->m_Items[1];
    while ( v9[v7] != svtId )
    {
      ++v7;
      ++p_correctionIconId;
      if ( (int)v7 >= max_length )
        goto LABEL_8;
    }
    if ( (unsigned int)v7 >= overwriteLimitCountIconIds->max_length )
    {
      sub_B17100(this, *(_QWORD *)&svtId, isFollower);
      sub_B170A0();
    }
  }
  else
  {
LABEL_8:
    p_correctionIconId = &this->fields.correctionIconId;
  }
  return *p_correctionIconId;
}


int32_t __fastcall QuestRestrictionInfo__GetDataLostBattleId(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.dataLostBattleId;
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetDialogList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x20
  __int64 IsDisplayedRestrictionDialog; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct RestrictionMessageEntity_array *restrictionMessageEntities; // x22
  int v19; // w8
  int i; // w23
  RestrictionMessageEntity_o *v21; // x25
  int32_t frequencyType; // w8
  PartyOrganizationUtility_o *v23; // x0
  WebViewManager_o *v24; // x0
  UserQuestMaster_o *v25; // x21
  int64_t v26; // x0
  UserQuestEntity_o *v27; // x0
  UserQuestEntity_o *v28; // x21
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w23
  int v31; // w24
  int32_t v32; // w21
  int32_t *v33; // x27
  int32_t v34; // w8
  PartyOrganizationUtility_o *v35; // x0
  WebViewManager_o *Instance; // x0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v40; // x22

  if ( (byte_40FD5A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v13);
    byte_40FD5A5 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !this->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_61;
    max_length = questRestrictionEntityList->max_length;
    if ( max_length < 1 )
      goto LABEL_59;
    v31 = 1;
    while ( 1 )
    {
      v32 = v31 - 1;
      if ( v31 - 1 >= questRestrictionEntityList->max_length )
      {
LABEL_62:
        sub_B17100(IsDisplayedRestrictionDialog, v16, v17);
        sub_B170A0();
      }
      v33 = (int32_t *)questRestrictionEntityList->m_Items[v32];
      if ( !v33 )
        goto LABEL_61;
      v34 = v33[7];
      if ( v34 == 1 )
        break;
      if ( v34 == 2 )
      {
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        v35 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !v35 )
          goto LABEL_61;
        IsDisplayedRestrictionDialog = PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                         v35,
                                         v33[4],
                                         v33[5],
                                         v33[6],
                                         1,
                                         0LL);
        if ( (IsDisplayedRestrictionDialog & 1) != 0 )
          goto LABEL_56;
        goto LABEL_54;
      }
      if ( v34 == 3 )
        goto LABEL_54;
LABEL_56:
      if ( v31 >= max_length )
        goto LABEL_59;
      questRestrictionEntityList = this->fields.questRestrictionEntityList;
      ++v31;
      if ( !questRestrictionEntityList )
        goto LABEL_61;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_61;
    MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_61;
    EntityFromId = UserQuestMaster__getEntityFromId(MasterData_WarQuestSelectionMaster, UserId, v33[4], 0LL);
    if ( EntityFromId )
    {
      v40 = EntityFromId;
      IsDisplayedRestrictionDialog = UserQuestEntity__getClearNum(EntityFromId, 0LL);
      if ( (_DWORD)IsDisplayedRestrictionDialog )
        goto LABEL_56;
      IsDisplayedRestrictionDialog = UserQuestEntity__HasStatus(v40, 16, 0LL);
      if ( (IsDisplayedRestrictionDialog & 1) != 0 )
        goto LABEL_56;
    }
LABEL_54:
    if ( !v14 )
      goto LABEL_61;
    System_Collections_Generic_List_int___Add(
      v14,
      v32,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    goto LABEL_56;
  }
  restrictionMessageEntities = this->fields.restrictionMessageEntities;
  if ( !restrictionMessageEntities )
    goto LABEL_61;
  v19 = restrictionMessageEntities->max_length;
  if ( v19 >= 1 )
  {
    for ( i = 0; i < v19; ++i )
    {
      if ( i >= (unsigned int)v19 )
        goto LABEL_62;
      v21 = restrictionMessageEntities->m_Items[i];
      if ( !v21 )
        goto LABEL_61;
      frequencyType = v21->fields.frequencyType;
      switch ( frequencyType )
      {
        case 1:
          v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v24 )
            goto LABEL_61;
          v25 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)v24,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          v26 = NetworkManager__get_UserId(0LL);
          if ( !v25 )
            goto LABEL_61;
          v27 = UserQuestMaster__getEntityFromId(v25, v26, this->fields.questId, 0LL);
          if ( !v27
            || (v28 = v27,
                IsDisplayedRestrictionDialog = UserQuestEntity__getClearNum(v27, 0LL),
                !(_DWORD)IsDisplayedRestrictionDialog)
            && (IsDisplayedRestrictionDialog = UserQuestEntity__HasStatus(v28, 16, 0LL),
                (IsDisplayedRestrictionDialog & 1) == 0) )
          {
LABEL_27:
            if ( !v14 )
              goto LABEL_61;
            System_Collections_Generic_List_int___Add(
              v14,
              v21->fields.id,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
          break;
        case 2:
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          v23 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !v23 )
            goto LABEL_61;
          IsDisplayedRestrictionDialog = PartyOrganizationUtility__IsDisplayedRestrictionDialog(
                                           v23,
                                           this->fields.questId,
                                           this->fields.questPhase,
                                           v21->fields.id,
                                           1,
                                           0LL);
          if ( (IsDisplayedRestrictionDialog & 1) == 0 )
            goto LABEL_27;
          break;
        case 3:
          goto LABEL_27;
      }
      v19 = restrictionMessageEntities->max_length;
    }
  }
LABEL_59:
  if ( !v14 )
LABEL_61:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessage(
        QuestRestrictionInfo_o *this,
        int32_t n,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x20
  struct RestrictionMessageEntity_array *restrictionMessageEntities; // x9
  int max_length; // w10
  System_String_o **p_dialogMessage; // x8
  unsigned int v8; // w11
  RestrictionMessageEntity_o *v9; // x12
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  QuestRestrictionEntity_o *v11; // x8

  v4 = this;
  if ( (byte_40FD5A6 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B16FFC(&StringLiteral_1, *(_QWORD *)&n);
    byte_40FD5A6 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
      {
LABEL_20:
        sub_B17100(this, *(_QWORD *)&n, method);
        sub_B170A0();
      }
      v11 = questRestrictionEntityList->m_Items[n];
      if ( v11 )
      {
        p_dialogMessage = &v11->fields.dialogMessage;
        return *p_dialogMessage;
      }
    }
LABEL_19:
    sub_B170D4();
  }
  restrictionMessageEntities = v4->fields.restrictionMessageEntities;
  if ( !restrictionMessageEntities )
    goto LABEL_19;
  max_length = restrictionMessageEntities->max_length;
  if ( max_length < 1 )
  {
    p_dialogMessage = (System_String_o **)&StringLiteral_1;
  }
  else
  {
    p_dialogMessage = (System_String_o **)&StringLiteral_1;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        goto LABEL_20;
      v9 = restrictionMessageEntities->m_Items[v8];
      if ( !v9 )
        goto LABEL_19;
      if ( v9->fields.id == n )
        break;
      if ( (int)++v8 >= max_length )
        return *p_dialogMessage;
    }
    p_dialogMessage = &v9->fields.dialogMessage;
  }
  return *p_dialogMessage;
}


// local variable allocation has failed, the output may be wrong!
QuestRestrictionInfo_DialogMessageInfo_o *__fastcall QuestRestrictionInfo__GetDialogMessageInfo(
        QuestRestrictionInfo_o *this,
        int32_t messageId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  QuestRestrictionInfo_DialogMessageInfo_o *result; // x0
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0

  if ( (byte_40FD5BC & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__,
      *(_QWORD *)&messageId);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__,
      v5);
    byte_40FD5BC = 1;
  }
  result = (QuestRestrictionInfo_DialogMessageInfo_o *)this->fields.dialogMessageInfoDictionary;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)result,
           messageId,
           (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__ContainsKey__) )
    {
      dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
      if ( !dialogMessageInfoDictionary )
        sub_B170D4();
      return (QuestRestrictionInfo_DialogMessageInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)dialogMessageInfoDictionary,
                                                           messageId,
                                                           (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__get_Item__);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageMySvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRestrictionInfo_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_age; // x20
  unsigned int v10; // w21
  RestrictionWholeEntity_o *v11; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_40FD5BF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v5);
    this = (QuestRestrictionInfo_o *)sub_B16FFC(&StringLiteral_1, v6);
    byte_40FD5BF = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v3->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_20;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_age = (System_String_o **)&StringLiteral_1;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v11 = restrictionWholeEntities->m_Items[v10];
      if ( !v11 )
        goto LABEL_20;
      if ( v11->fields.type == 5 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           Master_WarQuestSelectionMaster,
                                           &entity,
                                           v11->fields.restrictionMessageId,
                                           (const MethodInfo_266F3E4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v10 >= max_length )
        return *p_age;
    }
    if ( entity )
    {
      p_age = &entity->fields.age;
      return *p_age;
    }
LABEL_20:
    sub_B170D4();
  }
  p_age = (System_String_o **)&StringLiteral_1;
  return *p_age;
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageSupportSvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRestrictionInfo_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_age; // x20
  unsigned int v10; // w21
  RestrictionWholeEntity_o *v11; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_40FD5C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v5);
    this = (QuestRestrictionInfo_o *)sub_B16FFC(&StringLiteral_1, v6);
    byte_40FD5C1 = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v3->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_20;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_age = (System_String_o **)&StringLiteral_1;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v11 = restrictionWholeEntities->m_Items[v10];
      if ( !v11 )
        goto LABEL_20;
      if ( v11->fields.type == 6 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_20;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           Master_WarQuestSelectionMaster,
                                           &entity,
                                           v11->fields.restrictionMessageId,
                                           (const MethodInfo_266F3E4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v10 >= max_length )
        return *p_age;
    }
    if ( entity )
    {
      p_age = &entity->fields.age;
      return *p_age;
    }
LABEL_20:
    sub_B170D4();
  }
  p_age = (System_String_o **)&StringLiteral_1;
  return *p_age;
}


System_String_o *__fastcall QuestRestrictionInfo__GetDialogMessageSvtPos(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestRestrictionInfo_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x19
  int max_length; // w8
  System_String_o **p_age; // x20
  unsigned int v10; // w21
  RestrictionWholeEntity_o *v11; // x25
  int32_t type; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_40FD5BE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v5);
    this = (QuestRestrictionInfo_o *)sub_B16FFC(&StringLiteral_1, v6);
    byte_40FD5BE = 1;
  }
  entity = 0LL;
  restrictionWholeEntities = v3->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_21;
  max_length = restrictionWholeEntities->max_length;
  if ( max_length >= 1 )
  {
    p_age = (System_String_o **)&StringLiteral_1;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v11 = restrictionWholeEntities->m_Items[v10];
      if ( !v11 )
        goto LABEL_21;
      type = v11->fields.type;
      if ( type == 8 || type == 4 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_21;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           Master_WarQuestSelectionMaster,
                                           &entity,
                                           v11->fields.restrictionMessageId,
                                           (const MethodInfo_266F3E4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v10 >= max_length )
        return *p_age;
    }
    if ( entity )
    {
      p_age = &entity->fields.age;
      return *p_age;
    }
LABEL_21:
    sub_B170D4();
  }
  p_age = (System_String_o **)&StringLiteral_1;
  return *p_age;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetDialogTargetName(
        QuestRestrictionInfo_o *this,
        int32_t n,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *restrictionSlotDictionary; // x0
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v8; // x19
  System_String_o **p_title; // x20
  unsigned int v10; // w21
  __int64 v11; // x22
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  QuestRestrictionEntity_o *v13; // x8

  v4 = this;
  if ( (byte_40FD5A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, *(_QWORD *)&n);
    this = (QuestRestrictionInfo_o *)sub_B16FFC(&StringLiteral_1, v5);
    byte_40FD5A7 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
  {
    questRestrictionEntityList = v4->fields.questRestrictionEntityList;
    if ( questRestrictionEntityList )
    {
      if ( questRestrictionEntityList->max_length <= n )
      {
LABEL_21:
        sub_B17100(this, *(_QWORD *)&n, method);
        sub_B170A0();
      }
      v13 = questRestrictionEntityList->m_Items[n];
      if ( v13 )
      {
        p_title = &v13->fields.title;
        return *p_title;
      }
    }
LABEL_20:
    sub_B170D4();
  }
  restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v4->fields.restrictionSlotDictionary;
  if ( !restrictionSlotDictionary )
    goto LABEL_20;
  this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                     restrictionSlotDictionary,
                                     n,
                                     (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
  if ( !this )
    goto LABEL_20;
  dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
  v8 = this;
  if ( dialogMessageInfoDictionary < 1 )
  {
    p_title = (System_String_o **)&StringLiteral_1;
  }
  else
  {
    p_title = (System_String_o **)&StringLiteral_1;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= dialogMessageInfoDictionary )
        goto LABEL_21;
      v11 = *((_QWORD *)&v8->fields.eventId + (int)v10);
      if ( !v11 )
        goto LABEL_20;
      this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v11 + 32), 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      dialogMessageInfoDictionary = (int)v8->fields.dialogMessageInfoDictionary;
      if ( (int)++v10 >= dialogMessageInfoDictionary )
        return *p_title;
    }
    p_title = (System_String_o **)(v11 + 32);
  }
  return *p_title;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestRestrictionInfo__GetDialogType(
        QuestRestrictionInfo_o *this,
        int32_t n,
        const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8
  RestrictionEntity_o *v5; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_8;
  if ( restrictionEntityList->max_length <= n )
  {
    sub_B17100(this, *(_QWORD *)&n, method);
    sub_B170A0();
  }
  v5 = restrictionEntityList->m_Items[n];
  if ( !v5 )
LABEL_8:
    sub_B170D4();
  return v5->fields.type;
}


bool __fastcall QuestRestrictionInfo__GetExplanationMessage(
        QuestRestrictionInfo_o *this,
        System_String_o **message,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct RestrictionBaseEntity_o *restrictionBaseEntity; // x8
  QuestRestrictionInfo_o *v9; // x20
  struct RestrictionBaseEntity_o *v11; // x8
  System_String_o *noticeMessage; // x1
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  int max_length; // w21
  il2cpp_array_size_t v15; // w22
  QuestRestrictionEntity_o *v16; // x23

  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  v9 = this;
  if ( !restrictionBaseEntity )
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
LABEL_13:
      sub_B170D4();
    max_length = questRestrictionEntityList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= questRestrictionEntityList->max_length )
        {
          sub_B17100(this, message, method);
          sub_B170A0();
        }
        v16 = questRestrictionEntityList->m_Items[v15];
        if ( !v16 )
          goto LABEL_13;
        this = (QuestRestrictionInfo_o *)System_String__IsNullOrEmpty(v16->fields.noticeMessage, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        if ( (int)++v15 >= max_length )
          goto LABEL_14;
        questRestrictionEntityList = v9->fields.questRestrictionEntityList;
        if ( !questRestrictionEntityList )
          goto LABEL_13;
      }
      noticeMessage = v16->fields.noticeMessage;
      goto LABEL_16;
    }
LABEL_14:
    *message = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)message, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    return 0;
  }
  if ( System_String__IsNullOrEmpty(restrictionBaseEntity->fields.subMessage, 0LL) )
    goto LABEL_14;
  v11 = v9->fields.restrictionBaseEntity;
  if ( !v11 )
    goto LABEL_13;
  noticeMessage = v11->fields.subMessage;
LABEL_16:
  *message = noticeMessage;
  sub_B16F98(
    (BattleServantConfConponent_o *)message,
    (System_Int32_array **)noticeMessage,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  return 1;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_40FD5B1 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10359, v2);
    byte_40FD5B1 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10359, 0LL);
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixNpcOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_40FD5B0 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10360, v2);
    byte_40FD5B0 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10360, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetFixedMyServantPositionCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int32_t v7; // w19
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD5C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_40FD5C7 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0;
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v7 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B170D4();
    v7 += LODWORD(v9.fields.current[1].monitor);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedMyServantPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x19
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD5C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&idx);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_40FD5C4 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedMyServantPosition )
    return 0LL;
  v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&idx,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
  if ( !fixedMyServantIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__) )
  {
    if ( !v13 )
      sub_B170D4();
    System_Collections_Generic_List_int___AddRange(
      v13,
      (System_Collections_Generic_IEnumerable_T__o *)v16.fields.current,
      (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v13 )
LABEL_15:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__GetFixedMyServantSingleRestriction(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t num,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_Int32_array *fixedMyServantSingleIndividualities; // x8
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t ServantImageLimitSealAfter; // w22
  WebViewManager_o *v19; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x0
  WarEntity_o *Entity; // x0
  ServantEntity_o *v22; // x20
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v24; // x21
  unsigned int v25; // w24
  RestrictionSlotDetailEntity_o *v26; // x23
  System_Int32_array *Individuality; // x0
  struct RestrictionEntity_o *fixedMyServantSingleRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  int32_t max_length; // w9

  v10 = this;
  if ( (byte_40FD5A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v13);
    this = (QuestRestrictionInfo_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FD5A2 = 1;
  }
  if ( !v10->fields.isFixedMyServantSingle )
    return 0;
  if ( v10->fields.restrictionBaseEntity )
  {
    fixedMyServantSingleIndividualities = v10->fields.fixedMyServantSingleIndividualities;
    if ( !fixedMyServantSingleIndividualities || !*(_QWORD *)&fixedMyServantSingleIndividualities->max_length )
      return 0;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                       MasterData_WarQuestSelectionMaster,
                                       svtId,
                                       dispLimitCount,
                                       0LL);
        v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( v19 )
        {
          v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)v19,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( v20 )
          {
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v20,
                       svtId,
                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( v10->fields.restrictionSlotDetailDictionary )
            {
              v22 = (ServantEntity_o *)Entity;
              this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v10->fields.restrictionSlotDetailDictionary,
                                                 1,
                                                 (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
              if ( this )
              {
                dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
                v24 = this;
                if ( dialogMessageInfoDictionary >= 1 )
                {
                  v25 = 0;
                  while ( 1 )
                  {
                    if ( v25 >= dialogMessageInfoDictionary )
                      goto LABEL_30;
                    v26 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v24->fields.eventId + (int)v25);
                    if ( !v26 )
                      goto LABEL_29;
                    if ( v26->fields.type == 1 )
                    {
                      if ( !v22 )
                        goto LABEL_29;
                      Individuality = ServantEntity__getIndividuality(v22, limitCount, ServantImageLimitSealAfter, 0LL);
                      this = (QuestRestrictionInfo_o *)RestrictionSlotDetailEntity__IsIndividuality(
                                                         v26,
                                                         Individuality,
                                                         0LL);
                      if ( ((unsigned __int8)this & 1) == 0 )
                        return 1;
                    }
                    dialogMessageInfoDictionary = (int)v24->fields.dialogMessageInfoDictionary;
                    if ( (int)++v25 >= dialogMessageInfoDictionary )
                      return 0;
                  }
                }
                return 0;
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_B170D4();
  }
  fixedMyServantSingleRestrictionEntity = v10->fields.fixedMyServantSingleRestrictionEntity;
  if ( !fixedMyServantSingleRestrictionEntity )
    goto LABEL_29;
  targetVals = fixedMyServantSingleRestrictionEntity->fields.targetVals;
  if ( !targetVals )
    return 0;
  max_length = targetVals->max_length;
  if ( max_length <= num )
    return 0;
  if ( max_length <= (unsigned int)num )
  {
LABEL_30:
    sub_B17100(this, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_B170A0();
  }
  return targetVals->m_Items[num + 1] != svtId;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedMyServantSingleRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_40FD5A3 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10358, v2);
    byte_40FD5A3 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10358, 0LL);
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  struct RestrictionEntity_o *fixedMyServantSingleRestrictionEntity; // x8

  if ( !this->fields.isFixedMyServantSingle )
    return 0LL;
  if ( this->fields.restrictionBaseEntity )
    return this->fields.fixedMyServantSingleIndividualities;
  fixedMyServantSingleRestrictionEntity = this->fields.fixedMyServantSingleRestrictionEntity;
  if ( fixedMyServantSingleRestrictionEntity )
    return fixedMyServantSingleRestrictionEntity->fields.targetVals;
  else
    return 0LL;
}


int32_t __fastcall QuestRestrictionInfo__GetFixedPositionCount(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  int32_t v7; // w19
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD5C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_40FD5C9 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedIndividualitiesList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v7 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B170D4();
    v7 += LODWORD(v9.fields.current[1].monitor);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x19
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD5C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&idx);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_40FD5C6 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isFixedPosition )
    return 0LL;
  v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&idx,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedIndividualitiesList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__) )
  {
    if ( !v13 )
      sub_B170D4();
    System_Collections_Generic_List_int___AddRange(
      v13,
      (System_Collections_Generic_IEnumerable_T__o *)v16.fields.current,
      (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v13 )
LABEL_15:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestRestrictionInfo__GetFixedServantPositionCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  int v7; // w21
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  int32_t v11; // w20
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  int v13; // w19
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-68h] BYREF
  int v16[2]; // [xsp+20h] [xbp-50h]
  int v17; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_40FD59F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_40FD59F = 1;
  }
  memset(&i, 0, sizeof(i));
  v17 = 0;
  if ( !this->fields.restrictionBaseEntity )
  {
    if ( this->fields.isFixedMyServantPosition )
    {
      fixedMyServantPositionRestrictionEntity = this->fields.fixedMyServantPositionRestrictionEntity;
      if ( fixedMyServantPositionRestrictionEntity )
      {
        targetVals = fixedMyServantPositionRestrictionEntity->fields.targetVals;
        if ( targetVals )
          return targetVals->max_length;
      }
    }
    if ( this->fields.isNeedStarting
      && (fixedServantPositionRestrictionEntity = this->fields.fixedServantPositionRestrictionEntity) != 0LL
      && (targetVals = fixedServantPositionRestrictionEntity->fields.targetVals) != 0LL )
    {
      return targetVals->max_length;
    }
    else
    {
      return 0;
    }
  }
  if ( this->fields.isFixedMyServantPosition )
  {
    fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_32;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    v7 = 0;
    for ( i = v15;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
          v7 += LODWORD(i.fields.current[1].monitor) )
    {
      if ( !i.fields.current )
        sub_B170D4();
    }
    v16[0] = 159;
    v17 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v17 = 0;
  }
  else
  {
    v7 = 0;
  }
  v11 = v7 + this->fields.isNeedStarting;
  if ( !this->fields.isFixedPosition )
    return v11;
  fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
  if ( !fixedIndividualitiesList )
LABEL_32:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedIndividualitiesList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v15;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        v11 += LODWORD(i.fields.current[1].monitor) )
  {
    if ( !i.fields.current )
      sub_B170D4();
  }
  v16[0] = 232;
  v13 = ++v17;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( v13 && v16[v13 - 1] == 232 )
    v17 = v13 - 1;
  return v11;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedServantPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_40FD5A1 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10357, v2);
    byte_40FD5A1 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10357, 0LL);
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetFixedServantPositionSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x19
  struct System_Collections_Generic_List_int____o *fixedMyServantIndividualitiesList; // x0
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  int v17; // w21
  int v18; // w8
  struct RestrictionEntity_o *fixedMyServantPositionRestrictionEntity; // x8
  struct System_Collections_Generic_List_int____o *fixedIndividualitiesList; // x0
  int v22; // w21
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-68h] BYREF
  int v24[3]; // [xsp+20h] [xbp-50h]
  int v25; // [xsp+2Ch] [xbp-44h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_40FD59E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_40FD59E = 1;
  }
  memset(&i, 0, sizeof(i));
  v25 = 0;
  if ( !this->fields.restrictionBaseEntity )
  {
    if ( this->fields.isFixedMyServantPosition )
    {
      fixedMyServantPositionRestrictionEntity = this->fields.fixedMyServantPositionRestrictionEntity;
      if ( fixedMyServantPositionRestrictionEntity )
        return fixedMyServantPositionRestrictionEntity->fields.targetVals;
    }
    if ( this->fields.isNeedStarting )
    {
      fixedMyServantPositionRestrictionEntity = this->fields.fixedServantPositionRestrictionEntity;
      if ( fixedMyServantPositionRestrictionEntity )
        return fixedMyServantPositionRestrictionEntity->fields.targetVals;
    }
    return 0LL;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.isFixedMyServantPosition )
  {
    fixedMyServantIndividualitiesList = this->fields.fixedMyServantIndividualitiesList;
    if ( !fixedMyServantIndividualitiesList )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedMyServantIndividualitiesList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v23;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
          System_Collections_Generic_List_int___AddRange(
            v14,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      if ( !v14 )
        sub_B170D4();
    }
    v24[0] = 134;
    v25 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v25 = 0;
  }
  if ( this->fields.isNeedStarting )
  {
    needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
    if ( !needStartingIndividualitiesList )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)needStartingIndividualitiesList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v23;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
          System_Collections_Generic_List_int___AddRange(
            v14,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      if ( !v14 )
        sub_B170D4();
    }
    v24[0] = 196;
    v17 = ++v25;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v24[v17 - 1] == 196 )
      {
        --v17;
        v25 = v18;
      }
    }
  }
  else
  {
    v17 = 0;
  }
  if ( this->fields.isFixedPosition )
  {
    fixedIndividualitiesList = this->fields.fixedIndividualitiesList;
    if ( !fixedIndividualitiesList )
      goto LABEL_43;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedIndividualitiesList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v23;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
          System_Collections_Generic_List_int___AddRange(
            v14,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      if ( !v14 )
        sub_B170D4();
    }
    v24[v17] = 260;
    v22 = ++v25;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( v22 && v24[v22 - 1] == 260 )
      v25 = v22 - 1;
  }
  if ( !v14 )
LABEL_43:
    sub_B170D4();
  if ( v14->fields._size >= 1 )
    return System_Collections_Generic_List_int___ToArray(
             v14,
             (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  return 0LL;
}


System_String_o *__fastcall QuestRestrictionInfo__GetFixedSupportPositionRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_40FD59D & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10362, v2);
    byte_40FD59D = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10362, 0LL);
}


RestrictionEntity_array *__fastcall QuestRestrictionInfo__GetList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.restrictionEntityList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetMessage(
        QuestRestrictionInfo_o *this,
        int32_t restrictionWholeType,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x20
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x9
  int max_length; // w10
  System_String_o **p_summary; // x8
  unsigned int v8; // w11
  RestrictionWholeEntity_o *v9; // x12

  v4 = this;
  if ( (byte_40FD590 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B16FFC(&StringLiteral_1, *(_QWORD *)&restrictionWholeType);
    byte_40FD590 = 1;
  }
  restrictionWholeEntities = v4->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_15:
    sub_B170D4();
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
  {
    p_summary = (System_String_o **)&StringLiteral_1;
  }
  else
  {
    p_summary = (System_String_o **)&StringLiteral_1;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        sub_B17100(this, *(_QWORD *)&restrictionWholeType, method);
        sub_B170A0();
      }
      v9 = restrictionWholeEntities->m_Items[v8];
      if ( !v9 )
        goto LABEL_15;
      if ( v9->fields.type == restrictionWholeType )
        break;
      if ( (int)++v8 >= max_length )
        return *p_summary;
    }
    p_summary = &v9->fields.summary;
  }
  return *p_summary;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetMessage_31241400(
        QuestRestrictionInfo_o *this,
        int32_t restrictionType,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x20
  struct RestrictionEntity_array *restrictionEntityList; // x9
  int max_length; // w10
  System_String_o **p_name; // x8
  unsigned int v8; // w11
  RestrictionEntity_o *v9; // x12

  v4 = this;
  if ( (byte_40FD591 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B16FFC(&StringLiteral_1, *(_QWORD *)&restrictionType);
    byte_40FD591 = 1;
  }
  restrictionEntityList = v4->fields.restrictionEntityList;
  if ( !restrictionEntityList )
LABEL_15:
    sub_B170D4();
  max_length = restrictionEntityList->max_length;
  if ( max_length < 1 )
  {
    p_name = (System_String_o **)&StringLiteral_1;
  }
  else
  {
    p_name = (System_String_o **)&StringLiteral_1;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        sub_B17100(this, *(_QWORD *)&restrictionType, method);
        sub_B170A0();
      }
      v9 = restrictionEntityList->m_Items[v8];
      if ( !v9 )
        goto LABEL_15;
      if ( v9->fields.type == restrictionType )
        break;
      if ( (int)++v8 >= max_length )
        return *p_name;
    }
    p_name = &v9->fields.name;
  }
  return *p_name;
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall QuestRestrictionInfo__GetMessages(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool isNoneTitle,
        bool isSlotOnly,
        bool uniqueServant,
        bool uniqueIndividuality,
        bool individuality,
        bool allOutBattle,
        bool dataLostBattle,
        bool fatigue,
        bool servantPos,
        bool myServantPos,
        bool needStarting,
        bool supportPos,
        bool singleSupport,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x20
  System_String_o *v34; // x26
  void *IsNullOrEmpty; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  System_String_o *v38; // x27
  Il2CppObject *v39; // x1
  Il2CppObject *v40; // x1
  Il2CppObject *v41; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x23
  int max_length; // w8
  unsigned int v44; // w24
  RestrictionWholeEntity_o *v45; // x21
  Il2CppObject *summary; // x1
  struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *restrictionSlotDetailDictionary; // x0
  int v48; // w8
  void *v49; // x21
  unsigned int v50; // w22
  __int64 v51; // x26
  System_String_o *v52; // x1
  System_String_o *v53; // x0
  bool v55; // [xsp+Ch] [xbp-74h]
  int32_t key; // [xsp+14h] [xbp-6Ch]

  if ( (byte_40FD58E & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      *(_QWORD *)&pos);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v25);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v26);
    sub_B16FFC(&LocalizationManager_TypeInfo, v27);
    sub_B16FFC(&StringLiteral_10334, v28);
    sub_B16FFC(&StringLiteral_11063, v29);
    sub_B16FFC(&StringLiteral_11064, v30);
    sub_B16FFC(&StringLiteral_11060, v31);
    sub_B16FFC(&StringLiteral_6371, v32);
    byte_40FD58E = 1;
  }
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  *(_QWORD *)&pos,
                                                                                                  isNoneTitle,
                                                                                                  isSlotOnly,
                                                                                                  uniqueServant);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !this->fields.restrictionBaseEntity )
    goto LABEL_86;
  v55 = individuality;
  key = pos;
  if ( !isSlotOnly )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_6371, 0LL);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_11064, 0LL);
    v38 = (System_String_o *)IsNullOrEmpty;
    if ( !this->fields.isUniqueServant )
    {
LABEL_19:
      if ( !this->fields.isFatigure )
        goto LABEL_30;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v40 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_11060, 0LL);
      if ( isNoneTitle )
      {
        if ( fatigue )
          goto LABEL_25;
      }
      else
      {
        v40 = (Il2CppObject *)System_String__Format(v34, v40, 0LL);
        if ( fatigue )
        {
LABEL_25:
          v40 = (Il2CppObject *)System_String__Concat_43743732((System_String_o *)v40, v38, 0LL);
          if ( !v33 )
            goto LABEL_88;
          goto LABEL_29;
        }
      }
      if ( !v33 )
        goto LABEL_88;
LABEL_29:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v33,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
LABEL_30:
      if ( !this->fields.isNotSingleSupportOnly )
        goto LABEL_41;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v41 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10334, 0LL);
      if ( isNoneTitle )
      {
        if ( singleSupport )
          goto LABEL_36;
      }
      else
      {
        v41 = (Il2CppObject *)System_String__Format(v34, v41, 0LL);
        if ( singleSupport )
        {
LABEL_36:
          v41 = (Il2CppObject *)System_String__Concat_43743732((System_String_o *)v41, v38, 0LL);
          if ( !v33 )
            goto LABEL_88;
          goto LABEL_40;
        }
      }
      if ( !v33 )
        goto LABEL_88;
LABEL_40:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v33,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
LABEL_41:
      restrictionWholeEntities = this->fields.restrictionWholeEntities;
      if ( !restrictionWholeEntities )
        goto LABEL_88;
      max_length = restrictionWholeEntities->max_length;
      if ( max_length >= 1 )
      {
        v44 = 0;
        while ( v44 < max_length )
        {
          v45 = restrictionWholeEntities->m_Items[v44];
          if ( !v45 )
            goto LABEL_88;
          IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v45->fields.summary, 0LL);
          if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
          {
            summary = (Il2CppObject *)v45->fields.summary;
            if ( !isNoneTitle )
              summary = (Il2CppObject *)System_String__Format(v34, summary, 0LL);
            switch ( v45->fields.type )
            {
              case 1:
                if ( v55 )
                  goto LABEL_65;
                break;
              case 2:
                if ( allOutBattle )
                  goto LABEL_65;
                break;
              case 4:
                if ( servantPos )
                  goto LABEL_65;
                break;
              case 5:
                if ( myServantPos )
                  goto LABEL_65;
                break;
              case 6:
              case 7:
                if ( supportPos )
                  goto LABEL_65;
                break;
              case 8:
                if ( needStarting )
                  goto LABEL_65;
                break;
              case 9:
                if ( uniqueIndividuality )
                  goto LABEL_65;
                break;
              case 0xA:
                if ( dataLostBattle )
LABEL_65:
                  summary = (Il2CppObject *)System_String__Concat_43743732((System_String_o *)summary, v38, 0LL);
                break;
              default:
                break;
            }
            if ( !v33 )
              goto LABEL_88;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v33,
              (EventMissionProgressRequest_Argument_ProgressData_o *)summary,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
          }
          max_length = restrictionWholeEntities->max_length;
          if ( (int)++v44 >= max_length )
            goto LABEL_69;
        }
LABEL_89:
        sub_B17100(IsNullOrEmpty, v36, v37);
        sub_B170A0();
      }
      goto LABEL_69;
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v39 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_11063, 0LL);
    if ( isNoneTitle )
    {
      if ( uniqueServant )
        goto LABEL_14;
    }
    else
    {
      v39 = (Il2CppObject *)System_String__Format(v34, v39, 0LL);
      if ( uniqueServant )
      {
LABEL_14:
        v39 = (Il2CppObject *)System_String__Concat_43743732((System_String_o *)v39, v38, 0LL);
        if ( !v33 )
          goto LABEL_88;
        goto LABEL_18;
      }
    }
    if ( !v33 )
      goto LABEL_88;
LABEL_18:
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v33,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    goto LABEL_19;
  }
LABEL_69:
  if ( key )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary
      || (IsNullOrEmpty = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
                            key,
                            (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__)) == 0LL )
    {
LABEL_88:
      sub_B170D4();
    }
    v48 = *((_DWORD *)IsNullOrEmpty + 6);
    v49 = IsNullOrEmpty;
    if ( v48 >= 1 )
    {
      v50 = 0;
      while ( v50 < v48 )
      {
        v51 = *((_QWORD *)v49 + (int)v50 + 4);
        if ( !v51 )
          goto LABEL_88;
        IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(*(System_String_o **)(v51 + 24), 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( isNoneTitle )
          {
            v52 = *(System_String_o **)(v51 + 24);
            if ( !v33 )
              goto LABEL_88;
          }
          else
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v53 = LocalizationManager__Get((System_String_o *)StringLiteral_6371, 0LL);
            v52 = System_String__Format(v53, *(Il2CppObject **)(v51 + 24), 0LL);
            if ( !v33 )
              goto LABEL_88;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v33,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
        }
        v48 = *((_DWORD *)v49 + 6);
        if ( (int)++v50 >= v48 )
          goto LABEL_86;
      }
      goto LABEL_89;
    }
  }
LABEL_86:
  if ( !v33 )
    goto LABEL_88;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *__fastcall QuestRestrictionInfo__GetMessages_31240276(
        QuestRestrictionInfo_o *this,
        RestrictionEntity_array *entities,
        bool isNoneTitle,
        bool isSlotOnly,
        bool uniqueServant,
        bool uniqueIndividuality,
        bool individuality,
        bool allOutBattle,
        bool dataLostBattle,
        bool fatigue,
        bool fixedPos,
        bool supportPos,
        bool singleSupport,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_String_o *v26; // x28
  System_String_o *v27; // x25
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x26
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  Il2CppObject *v36; // x1
  Il2CppObject *v37; // x1
  signed int max_length; // w8
  unsigned int v39; // w20
  RestrictionEntity_o *v40; // x19
  System_String_o *name; // x1

  if ( (byte_40FD58F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, entities);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v19);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v20);
    sub_B16FFC(&LocalizationManager_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_10334, v22);
    sub_B16FFC(&StringLiteral_11064, v23);
    sub_B16FFC(&StringLiteral_11060, v24);
    sub_B16FFC(&StringLiteral_6371, v25);
    byte_40FD58F = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6371, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11064, 0LL);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !isSlotOnly && this->fields.isFatigure )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_11060, 0LL);
    if ( isNoneTitle )
    {
      if ( !fatigue )
        goto LABEL_13;
    }
    else
    {
      v36 = (Il2CppObject *)System_String__Format(v26, v36, 0LL);
      if ( !fatigue )
      {
LABEL_13:
        if ( !v32 )
          goto LABEL_57;
        goto LABEL_17;
      }
    }
    v36 = (Il2CppObject *)System_String__Concat_43743732((System_String_o *)v36, v27, 0LL);
    if ( !v32 )
      goto LABEL_57;
LABEL_17:
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v32,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( this->fields.isNotSingleSupportOnly )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10334, 0LL);
    if ( !isNoneTitle )
      v37 = (Il2CppObject *)System_String__Format(v26, v37, 0LL);
    if ( singleSupport )
      v37 = (Il2CppObject *)System_String__Concat_43743732((System_String_o *)v37, v27, 0LL);
    if ( !v32 )
      goto LABEL_57;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v32,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  }
  if ( !entities )
    goto LABEL_57;
  max_length = entities->max_length;
  if ( max_length >= 1 )
  {
    v39 = 0;
    while ( 1 )
    {
      if ( v39 >= max_length )
      {
        sub_B17100(IsNullOrEmpty, v34, v35);
        sub_B170A0();
      }
      v40 = entities->m_Items[v39];
      if ( !v40 )
        break;
      IsNullOrEmpty = System_String__IsNullOrEmpty(v40->fields.name, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( isNoneTitle )
          name = v40->fields.name;
        else
          name = RestrictionEntity__getTitle(v40, 0LL);
        switch ( v40->fields.type )
        {
          case 1:
            if ( individuality )
              goto LABEL_51;
            break;
          case 6:
            if ( uniqueServant )
              goto LABEL_51;
            break;
          case 7:
            if ( supportPos )
              goto LABEL_51;
            break;
          case 8:
          case 9:
          case 0xE:
            if ( fixedPos )
              goto LABEL_51;
            break;
          case 0xD:
            if ( allOutBattle )
              goto LABEL_51;
            break;
          case 0xF:
            if ( uniqueIndividuality )
              goto LABEL_51;
            break;
          case 0x11:
            if ( dataLostBattle )
LABEL_51:
              name = System_String__Concat_43743732(name, v27, 0LL);
            break;
          default:
            break;
        }
        if ( !v32 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v32,
          (EventMissionProgressRequest_Argument_ProgressData_o *)name,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      }
      max_length = entities->max_length;
      if ( (int)++v39 >= max_length )
        goto LABEL_55;
    }
LABEL_57:
    sub_B170D4();
  }
LABEL_55:
  if ( !v32 )
    goto LABEL_57;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall QuestRestrictionInfo__GetMyServantNumRestriction(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.myServantNumMax;
}


System_String_o *__fastcall QuestRestrictionInfo__GetMyServantNumRestrictionDialogMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestRestrictionInfo_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  unsigned int v11; // w21
  RestrictionWholeEntity_o *v12; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x0
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int32_t v15; // w20
  int32_t v16; // w9
  QuestRestrictionInfo_SlotInfo_o *v17; // x8
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *restrictionSlotDictionary; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v19; // x0
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v21; // x21
  unsigned int v22; // w27
  __int64 v23; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int v26; // w9
  unsigned int v27; // w10
  RestrictionEntity_o *v28; // x11
  WarEntity_o *v30; // x8
  WarEntity_o *v31; // [xsp+0h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v3 = this;
  if ( (byte_40FD5AF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v7);
    this = (QuestRestrictionInfo_o *)sub_B16FFC(&StringLiteral_1, v8);
    byte_40FD5AF = 1;
  }
  v31 = 0LL;
  entity = 0LL;
  if ( v3->fields.restrictionBaseEntity )
  {
    restrictionWholeEntities = v3->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_57;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length < 1 )
    {
LABEL_16:
      slotInfos = v3->fields.slotInfos;
      if ( !slotInfos )
        goto LABEL_57;
      v15 = 0;
      while ( 1 )
      {
        v16 = slotInfos->max_length;
        if ( v15 >= v16 )
          return (System_String_o *)StringLiteral_1;
        if ( v15 >= (unsigned int)v16 )
          goto LABEL_58;
        v17 = slotInfos->m_Items[v15];
        if ( !v17 )
          goto LABEL_57;
        if ( v17->fields.slotType )
        {
          ++v15;
        }
        else
        {
          restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v3->fields.restrictionSlotDictionary;
          if ( !restrictionSlotDictionary )
            goto LABEL_57;
          this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                             restrictionSlotDictionary,
                                             ++v15,
                                             (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____ContainsKey__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v19 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v3->fields.restrictionSlotDictionary;
            if ( !v19 )
              goto LABEL_57;
            this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                               v19,
                                               v15,
                                               (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
            if ( !this )
              goto LABEL_57;
            dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
            v21 = this;
            if ( dialogMessageInfoDictionary >= 1 )
            {
              v22 = 0;
              while ( 1 )
              {
                if ( v22 >= dialogMessageInfoDictionary )
                  goto LABEL_58;
                v23 = *((_QWORD *)&v21->fields.eventId + (int)v22);
                if ( !v23 )
                  goto LABEL_57;
                if ( *(_DWORD *)(v23 + 44) && !*(_DWORD *)(v23 + 40) )
                {
                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  }
                  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_57;
                  this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                     Master_WarQuestSelectionMaster,
                                                     &v31,
                                                     *(_DWORD *)(v23 + 44),
                                                     (const MethodInfo_266F3E4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    break;
                }
                dialogMessageInfoDictionary = (int)v21->fields.dialogMessageInfoDictionary;
                if ( (int)++v22 >= dialogMessageInfoDictionary )
                  goto LABEL_39;
              }
              v30 = v31;
              if ( v31 )
                return v30->fields.age;
LABEL_57:
              sub_B170D4();
            }
          }
        }
LABEL_39:
        slotInfos = v3->fields.slotInfos;
        if ( !slotInfos )
          goto LABEL_57;
      }
    }
    v11 = 0;
    while ( v11 < max_length )
    {
      v12 = restrictionWholeEntities->m_Items[v11];
      if ( !v12 )
        goto LABEL_57;
      if ( v12->fields.type == 3 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
        if ( !v13 )
          goto LABEL_57;
        this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                           v13,
                                           &entity,
                                           v12->fields.restrictionMessageId,
                                           (const MethodInfo_266F3E4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v30 = entity;
          if ( entity )
            return v30->fields.age;
          goto LABEL_57;
        }
      }
      max_length = restrictionWholeEntities->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_16;
    }
    goto LABEL_58;
  }
  restrictionEntityList = v3->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_57;
  v26 = restrictionEntityList->max_length;
  if ( v26 >= 1 )
  {
    v27 = 0;
    method = 0LL;
    while ( v27 < v26 )
    {
      v28 = restrictionEntityList->m_Items[v27];
      if ( !v28 )
        goto LABEL_57;
      if ( v28->fields.type == 11 )
        method = (const MethodInfo *)v27;
      else
        method = (const MethodInfo *)(unsigned int)method;
      if ( (int)++v27 >= v26 )
        return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
    }
LABEL_58:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  LODWORD(method) = 0;
  return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetMyServantOrNpcRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool haveIndividualityServant,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *RestrictedName; // x19
  __int64 *v10; // x8
  System_String_o *v11; // x0

  if ( (byte_40FD5B8 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&pos);
    sub_B16FFC(&StringLiteral_10364, v7);
    sub_B16FFC(&StringLiteral_10367, v8);
    byte_40FD5B8 = 1;
  }
  RestrictedName = (Il2CppObject *)QuestRestrictionInfo__GetRestrictedName(
                                     this,
                                     pos,
                                     (const MethodInfo *)haveIndividualityServant);
  if ( haveIndividualityServant )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_10364;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = &StringLiteral_10367;
  }
  v11 = LocalizationManager__Get((System_String_o *)*v10, 0LL);
  return System_String__Format(v11, RestrictedName, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetMyServantOrNpcRestrictionNum(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x8

  if ( (byte_40FD5CC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__, method);
    byte_40FD5CC = 1;
  }
  if ( !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  if ( !myServantOrNpcRestrictionEntityList )
    sub_B170D4();
  return myServantOrNpcRestrictionEntityList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(
        QuestRestrictionInfo_o *this,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_int__o *v32; // x20
  struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *restrictionSlotDetailDictionary; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  int EvalValueWarsituation_k__BackingField_low; // w8
  WarBoardEvalValueSquare_EvalValueSquare_o *v38; // x19
  unsigned int v39; // w21
  __int64 v40; // x8
  WebViewManager_o *Instance; // x0
  ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *CollectionList; // x19
  System_Collections_Generic_IEnumerable_TSource__o *changeMaterial; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x1
  const MethodInfo_18D894C *v46; // x2
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v49; // x20
  peRenderTexture_ChangeLayerObject_o *v50; // x0
  peRenderTexture_ChangeLayerObject_o *v51; // x19
  WebViewManager_o *v52; // x0
  ServantMaster_o *v53; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0

  if ( (byte_40FD5BA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Distinct_int___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Intersect_int___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B16FFC(&Method_System_Predicate_RestrictionEntity___ctor__, v16);
    sub_B16FFC(&System_Predicate_RestrictionEntity__TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&Method_QuestRestrictionInfo___c__DisplayClass175_0__GetMyServantOrNpcSvtIdList_b__0__, v19);
    sub_B16FFC(&QuestRestrictionInfo___c__DisplayClass175_0_TypeInfo, v20);
    byte_40FD5BA = 1;
  }
  v21 = sub_B170CC(QuestRestrictionInfo___c__DisplayClass175_0_TypeInfo, *(_QWORD *)&index, method, v3, v4);
  QuestRestrictionInfo___c__DisplayClass175_0___ctor((QuestRestrictionInfo___c__DisplayClass175_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_29;
  *(_QWORD *)(v21 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)(v21 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
  {
    v32 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v28,
                                                      v29,
                                                      v30,
                                                      v31);
    System_Collections_Generic_List_int____ctor(
      v32,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_29;
    Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
             (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
             *(_DWORD *)(v21 + 24),
             (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !Item )
      goto LABEL_29;
    EvalValueWarsituation_k__BackingField_low = LODWORD(Item->fields._EvalValueWarsituation_k__BackingField);
    v38 = Item;
    if ( EvalValueWarsituation_k__BackingField_low >= 1 )
    {
      v39 = 0;
      while ( 1 )
      {
        if ( v39 >= EvalValueWarsituation_k__BackingField_low )
        {
          sub_B17100(Item, v35, v36);
          sub_B170A0();
        }
        v40 = *((_QWORD *)&v38->fields._EvalValue_k__BackingField + (int)v39);
        if ( !v40 )
          break;
        if ( *(_DWORD *)(v40 + 32) == 1 )
        {
          if ( !v32 )
            break;
          System_Collections_Generic_List_int___AddRange(
            v32,
            *(System_Collections_Generic_IEnumerable_T__o **)(v40 + 40),
            (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        EvalValueWarsituation_k__BackingField_low = LODWORD(v38->fields._EvalValueWarsituation_k__BackingField);
        if ( (int)++v39 >= EvalValueWarsituation_k__BackingField_low )
          goto LABEL_15;
      }
LABEL_29:
      sub_B170D4();
    }
LABEL_15:
    if ( !v32 )
      goto LABEL_29;
    if ( v32->fields._size >= 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_29;
      MasterData_WarQuestSelectionMaster = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_29;
      CollectionList = ServantMaster__GetCollectionList(MasterData_WarQuestSelectionMaster, 0LL);
      changeMaterial = System_Linq_Enumerable__Distinct_int_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                         (const MethodInfo_18D4DE0 *)Method_System_Linq_Enumerable_Distinct_int___);
      v45 = (System_Collections_Generic_IEnumerable_TSource__o *)CollectionList;
      v46 = (const MethodInfo_18D894C *)Method_System_Linq_Enumerable_Intersect_int___;
LABEL_27:
      v54 = System_Linq_Enumerable__Intersect_int_(changeMaterial, v45, v46);
      return System_Linq_Enumerable__ToArray_int_(
               v54,
               (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
  }
  else
  {
    questRestrictionEntityList = this->fields.questRestrictionEntityList;
    if ( !questRestrictionEntityList )
      goto LABEL_29;
    if ( (signed int)questRestrictionEntityList->max_length > index )
    {
      myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
      v49 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_RestrictionEntity__TypeInfo,
                                                                       v28,
                                                                       v29,
                                                                       v30,
                                                                       v31);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v49,
        (Il2CppObject *)v21,
        Method_QuestRestrictionInfo___c__DisplayClass175_0__GetMyServantOrNpcSvtIdList_b__0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_RestrictionEntity___ctor__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      v50 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v49,
              (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v50 )
      {
        v51 = v50;
        v52 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v52 )
          goto LABEL_29;
        v53 = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v52,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
        if ( !v53 )
          goto LABEL_29;
        v45 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(v53, 0LL);
        changeMaterial = (System_Collections_Generic_IEnumerable_TSource__o *)v51->fields.changeMaterial;
        v46 = (const MethodInfo_18D894C *)Method_System_Linq_Enumerable_Intersect_int___;
        goto LABEL_27;
      }
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestRestrictionInfo__GetMyServantOrNpcSvtIdUnionNpcList(
        QuestRestrictionInfo_o *this,
        System_Collections_Generic_Dictionary_int__FollowerInfo__o **npcInfoDictionary,
        int32_t index,
        bool indexIsPos,
        const MethodInfo *method)
{
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
  QuestRestrictionInfo___c__DisplayClass189_0_o *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v37; // x19
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  const MethodInfo *v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  _QWORD **v48; // x24
  __int64 v49; // x19
  __int16 v50; // w8
  __int64 v51; // x19
  __int64 v52; // x19
  __int64 v53; // x19
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x21
  System_Int32_array *MyServantOrNpcSvtIdList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v56; // x23
  peRenderTexture_ChangeLayerObject_o *v57; // x0
  __int64 v58; // x1
  const MethodInfo *v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  peRenderTexture_ChangeLayerObject_o *v62; // x23
  WebViewManager_o *Instance; // x0
  ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CollectionList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  int32_t MyServantOrSupportTargetPos; // w25
  _QWORD **v68; // x21
  __int64 v69; // x19
  __int16 v70; // w8
  __int64 v71; // x19
  __int64 v72; // x19
  __int64 v73; // x19
  System_Collections_Generic_List_int__o *v74; // x23
  WebViewManager_o *v75; // x0
  NpcFollowerMaster_o *v76; // x0
  FollowerInfo_array *QuestFollowerList; // x24
  WebViewManager_o *v78; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *ServantLeaderInfo; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  int max_length; // w8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v83; // x26
  int i; // w22
  FollowerInfo_o *v85; // x27
  int32_t ReturnTypeByQuestId; // w0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v87; // x28
  int32_t v88; // w0
  System_Int32_array *NpcServantIndividuality; // x0
  const MethodInfo *v90; // x3
  System_Int32_array *OverwriteIndividuality; // x0
  const MethodInfo *v92; // x3
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x19
  struct System_Text_StringBuilder_o *sb; // x21
  int32_t v95; // w0
  const MethodInfo *v96; // x6
  struct MiniMessagePack_MiniMessagePacker_o *v97; // x19
  struct System_Text_StringBuilder_o *v98; // x21
  int32_t v99; // w0
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v100; // x21
  int32_t v101; // w0
  struct MiniMessagePack_MiniMessagePacker_o *v102; // x19
  struct System_Text_StringBuilder_o *v103; // x28
  System_Collections_Generic_Dictionary_int__FollowerInfo__o *v104; // x21
  int32_t v105; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v106; // x0
  System_Collections_Generic_IEnumerable_TSource__o *first; // [xsp+8h] [xbp-78h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-70h]
  UserServantEntity_o *v111; // [xsp+20h] [xbp-60h] BYREF
  UserServantEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  if ( (byte_40FD5C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, npcInfoDictionary);
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v13);
    sub_B16FFC(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo, v18);
    sub_B16FFC(&Method_System_Linq_Enumerable_Intersect_int___, v19);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v20);
    sub_B16FFC(&Method_System_Linq_Enumerable_Union_int___, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
    sub_B16FFC(&Method_System_Predicate_RestrictionEntity___ctor__, v27);
    sub_B16FFC(&System_Predicate_RestrictionEntity__TypeInfo, v28);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_B16FFC(&Method_QuestRestrictionInfo___c__DisplayClass189_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__, v30);
    sub_B16FFC(&QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo, v31);
    byte_40FD5C3 = 1;
  }
  v111 = 0LL;
  entity = 0LL;
  v32 = (QuestRestrictionInfo___c__DisplayClass189_0_o *)sub_B170CC(
                                                           QuestRestrictionInfo___c__DisplayClass189_0_TypeInfo,
                                                           npcInfoDictionary,
                                                           *(_QWORD *)&index,
                                                           indexIsPos,
                                                           method);
  QuestRestrictionInfo___c__DisplayClass189_0___ctor(v32, 0LL);
  if ( !v32 )
    goto LABEL_76;
  v32->fields.index = index;
  v37 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__FollowerInfo__TypeInfo,
                                                                                                   v33,
                                                                                                   v34,
                                                                                                   v35,
                                                                                                   v36);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v37,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo___ctor__);
  *npcInfoDictionary = (System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v37;
  sub_B16F98(
    (BattleServantConfConponent_o *)npcInfoDictionary,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v48 = (_QWORD **)Method_System_Array_Empty_int___;
  v49 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v50 = *(_WORD *)(v49 + 306);
  if ( (v50 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v50 = *(_WORD *)(v49 + 306);
  }
  if ( (v50 & 0x400) != 0 )
  {
    v51 = *v48[6];
    if ( (*(_BYTE *)(v51 + 306) & 1) == 0 )
      sub_AAFCFC(*v48[6]);
    if ( !*(_DWORD *)(v51 + 224) )
    {
      v52 = *v48[6];
      if ( (*(_BYTE *)(v52 + 306) & 1) == 0 )
        sub_AAFCFC(*v48[6]);
      j_il2cpp_runtime_class_init_0(v52);
    }
  }
  v53 = *v48[6];
  if ( (*(_BYTE *)(v53 + 306) & 1) == 0 )
    sub_AAFCFC(*v48[6]);
  if ( indexIsPos )
  {
    myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
    MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v53 + 184);
    v56 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                     System_Predicate_RestrictionEntity__TypeInfo,
                                                                     v44,
                                                                     v45,
                                                                     v46,
                                                                     v47);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v56,
      (Il2CppObject *)v32,
      Method_QuestRestrictionInfo___c__DisplayClass189_0__GetMyServantOrNpcSvtIdUnionNpcList_b__0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_RestrictionEntity___ctor__);
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_76;
    v57 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
            (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
            (System_Predicate_T__o *)v56,
            (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
    if ( v57 )
    {
      v62 = v57;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      MasterData_WarQuestSelectionMaster = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_76;
      CollectionList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantMaster__GetCollectionList(
                                                                              MasterData_WarQuestSelectionMaster,
                                                                              0LL);
      v66 = System_Linq_Enumerable__Intersect_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v62->fields.changeMaterial,
              CollectionList,
              (const MethodInfo_18D894C *)Method_System_Linq_Enumerable_Intersect_int___);
      MyServantOrNpcSvtIdList = System_Linq_Enumerable__ToArray_int_(
                                  v66,
                                  (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    MyServantOrSupportTargetPos = v32->fields.index;
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(this, v32->fields.index, v45);
    if ( !MyServantOrNpcSvtIdList )
    {
      v68 = (_QWORD **)Method_System_Array_Empty_int___;
      v69 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v70 = *(_WORD *)(v69 + 306);
      if ( (v70 & 1) == 0 )
      {
        sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v70 = *(_WORD *)(v69 + 306);
      }
      if ( (v70 & 0x400) != 0 )
      {
        v71 = *v68[6];
        if ( (*(_BYTE *)(v71 + 306) & 1) == 0 )
          sub_AAFCFC(*v68[6]);
        if ( !*(_DWORD *)(v71 + 224) )
        {
          v72 = *v68[6];
          if ( (*(_BYTE *)(v72 + 306) & 1) == 0 )
            sub_AAFCFC(*v68[6]);
          j_il2cpp_runtime_class_init_0(v72);
        }
      }
      v73 = *v68[6];
      if ( (*(_BYTE *)(v73 + 306) & 1) == 0 )
        sub_AAFCFC(*v68[6]);
      MyServantOrNpcSvtIdList = **(System_Int32_array ***)(v73 + 184);
    }
    MyServantOrSupportTargetPos = v32->fields.index;
    if ( !this->fields.restrictionBaseEntity )
      MyServantOrSupportTargetPos = QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
                                      this,
                                      MyServantOrSupportTargetPos,
                                      v59);
  }
  v74 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v58,
                                                    v59,
                                                    v60,
                                                    v61);
  System_Collections_Generic_List_int____ctor(
    v74,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v75 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v75 )
    goto LABEL_76;
  v76 = (NpcFollowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v75,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
  if ( !v76 )
    goto LABEL_76;
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(v76, this->fields.questId, this->fields.questPhase, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  v78 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v78
    || (first = (System_Collections_Generic_IEnumerable_TSource__o *)MyServantOrNpcSvtIdList,
        ServantLeaderInfo = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                     (DataManager_o *)v78,
                                                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___),
        !QuestFollowerList) )
  {
LABEL_76:
    sub_B170D4();
  }
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    v83 = ServantLeaderInfo;
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        sub_B17100(ServantLeaderInfo, v80, v81);
        sub_B170A0();
      }
      v85 = QuestFollowerList->m_Items[i];
      ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
      if ( !v85 )
        goto LABEL_76;
      ServantLeaderInfo = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)FollowerInfo__getServantLeaderInfo(
                                                                                                   v85,
                                                                                                   0,
                                                                                                   ReturnTypeByQuestId,
                                                                                                   0LL);
      if ( ServantLeaderInfo )
      {
        if ( !v83 )
          goto LABEL_76;
        v87 = ServantLeaderInfo;
        if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               v83,
               &entity,
               v85->fields.npcFollowerSvtId,
               (const MethodInfo_266F60C *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__) )
        {
          v88 = FollowerInfo__GetReturnTypeByQuestId(this->fields.questId, 0LL);
          NpcServantIndividuality = FollowerInfo__GetNpcServantIndividuality(v85, 0, v88, 0LL);
          ServantLeaderInfo = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_31261700(this, NpcServantIndividuality, MyServantOrSupportTargetPos, v90);
          if ( ((unsigned __int8)ServantLeaderInfo & 1) != 0 )
            goto LABEL_74;
        }
        else
        {
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_76;
          if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                  Master_WarQuestSelectionMaster,
                  &v111,
                  v85->fields.npcFollowerSvtId,
                  (const MethodInfo_266F60C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            goto LABEL_80;
          if ( !v111 )
            goto LABEL_76;
          if ( !NpcServantFollowerEntity__IsOverwriteIndividuality((NpcServantFollowerEntity_o *)v111, 0LL) )
            goto LABEL_80;
          if ( !v111 )
            goto LABEL_76;
          OverwriteIndividuality = NpcServantFollowerEntity__GetOverwriteIndividuality(
                                     (NpcServantFollowerEntity_o *)v111,
                                     0LL);
          if ( QuestRestrictionInfo__IsRestrictionServantIndividuality_31261700(
                 this,
                 OverwriteIndividuality,
                 MyServantOrSupportTargetPos,
                 v92) )
          {
LABEL_80:
            seriazlier = v87->fields.seriazlier;
            sb = v87->fields.sb;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v113.fields.currentCryptoKey = seriazlier;
            *(_QWORD *)&v113.fields.fakeValue = sb;
            v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v113, 0LL);
            ServantLeaderInfo = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(this, v95, v87->fields.revision, *(&v87[2].fields._MasterKind_k__BackingField + 1), MyServantOrSupportTargetPos, 0, v96);
            if ( ((unsigned __int8)ServantLeaderInfo & 1) != 0 )
              goto LABEL_74;
          }
        }
        v97 = v87->fields.seriazlier;
        v98 = v87->fields.sb;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v114.fields.currentCryptoKey = v97;
        *(_QWORD *)&v114.fields.fakeValue = v98;
        v99 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v114, 0LL);
        if ( !v74 )
          goto LABEL_76;
        System_Collections_Generic_List_int___Add(
          v74,
          v99,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        v100 = *npcInfoDictionary;
        v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                 *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v87->fields.seriazlier,
                 0LL);
        if ( !v100 )
          goto LABEL_76;
        ServantLeaderInfo = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                                                                     (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v100,
                                                                                                     v101,
                                                                                                     (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__ContainsKey__);
        if ( ((unsigned __int8)ServantLeaderInfo & 1) == 0 )
        {
          v102 = v87->fields.seriazlier;
          v103 = v87->fields.sb;
          v104 = *npcInfoDictionary;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v115.fields.currentCryptoKey = v102;
          *(_QWORD *)&v115.fields.fakeValue = v103;
          v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v115, 0LL);
          if ( !v104 )
            goto LABEL_76;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v104,
            v105,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v85,
            (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__FollowerInfo__Add__);
        }
      }
LABEL_74:
      max_length = QuestFollowerList->max_length;
    }
  }
  v106 = System_Linq_Enumerable__Union_int_(
           first,
           (System_Collections_Generic_IEnumerable_TSource__o *)v74,
           (const MethodInfo_19C7D94 *)Method_System_Linq_Enumerable_Union_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v106,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetMyServantOrSupportRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        bool haveIndividualityServant,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 *v12; // x8
  void *MyServantOrNpcSvtIdList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int v16; // w8
  _DWORD *v17; // x19
  __int64 v18; // x20
  int v19; // w23

  if ( (byte_40FD5B9 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&pos);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_10369, v8);
    sub_B16FFC(&StringLiteral_10368, v9);
    sub_B16FFC(&StringLiteral_10366, v10);
    sub_B16FFC(&StringLiteral_10365, v11);
    byte_40FD5B9 = 1;
  }
  if ( this->fields.isNotSingleSupportOnly && this->fields.servantNumMin >= 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = &StringLiteral_10366;
  }
  else if ( haveIndividualityServant )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = &StringLiteral_10365;
  }
  else
  {
    MyServantOrNpcSvtIdList = QuestRestrictionInfo__GetMyServantOrNpcSvtIdList(
                                this,
                                pos,
                                (const MethodInfo *)haveIndividualityServant);
    if ( MyServantOrNpcSvtIdList
      && (v16 = *((_DWORD *)MyServantOrNpcSvtIdList + 6), v17 = MyServantOrNpcSvtIdList, v16 >= 1) )
    {
      v18 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v18 >= v16 )
        {
          sub_B17100(MyServantOrNpcSvtIdList, v14, v15);
          sub_B170A0();
        }
        MyServantOrNpcSvtIdList = BalanceConfig_TypeInfo;
        v19 = v17[v18 + 8];
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          MyServantOrNpcSvtIdList = BalanceConfig_TypeInfo;
        }
        if ( v19 < *(_DWORD *)(*((_QWORD *)MyServantOrNpcSvtIdList + 23) + 836LL) )
          break;
        v16 = v17[6];
        if ( (int)++v18 >= v16 )
          goto LABEL_23;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = &StringLiteral_10368;
    }
    else
    {
LABEL_23:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = &StringLiteral_10369;
    }
  }
  return LocalizationManager__Get((System_String_o *)*v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestRestrictionInfo__GetMyServantOrSupportTargetPos(
        QuestRestrictionInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v24; // x20
  peRenderTexture_ChangeLayerObject_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x8

  if ( (byte_40FD5BB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Predicate_RestrictionEntity___ctor__, v7);
    sub_B16FFC(&System_Predicate_RestrictionEntity__TypeInfo, v8);
    sub_B16FFC(&Method_QuestRestrictionInfo___c__DisplayClass176_0__GetMyServantOrSupportTargetPos_b__0__, v9);
    sub_B16FFC(&QuestRestrictionInfo___c__DisplayClass176_0_TypeInfo, v10);
    byte_40FD5BB = 1;
  }
  v11 = sub_B170CC(QuestRestrictionInfo___c__DisplayClass176_0_TypeInfo, *(_QWORD *)&index, method, v3, v4);
  QuestRestrictionInfo___c__DisplayClass176_0___ctor((QuestRestrictionInfo___c__DisplayClass176_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_14;
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v11 + 24) = index;
  if ( this->fields.restrictionBaseEntity )
    goto LABEL_12;
  questRestrictionEntityList = this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_14;
  if ( (signed int)questRestrictionEntityList->max_length <= index )
  {
LABEL_12:
    LODWORD(v25) = 0;
    return (int)v25;
  }
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v24 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_RestrictionEntity__TypeInfo,
                                                                   v18,
                                                                   v19,
                                                                   v20,
                                                                   v21);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_QuestRestrictionInfo___c__DisplayClass176_0__GetMyServantOrSupportTargetPos_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  v25 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
          (System_Predicate_T__o *)v24,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v25 )
    return (int)v25;
  v28 = *(_QWORD *)&v25->fields.prevLayer;
  if ( !v28 )
LABEL_14:
    sub_B170D4();
  if ( !*(_DWORD *)(v28 + 24) )
  {
    sub_B17100(v25, v26, v27);
    sub_B170A0();
  }
  LODWORD(v25) = *(_DWORD *)(v28 + 32);
  return (int)v25;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int____o *__fastcall QuestRestrictionInfo__GetNeedIndividualityList(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v4; // x8

  if ( !this->fields.restrictionBaseEntity )
    return 0LL;
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_8;
  if ( pos - 1 >= slotInfos->max_length )
  {
    sub_B17100(this, *(_QWORD *)&pos, method);
    sub_B170A0();
  }
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_8:
    sub_B170D4();
  return v4->fields.individualityList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetNeedIndividualityMessage(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x0
  const MethodInfo *v12; // x2
  System_String_o *DialogMessage; // x19
  int v14; // w20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FD5BD & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__,
      *(_QWORD *)&pos);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__get_Current__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Key__,
      v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_int__QuestRestrictionInfo_DialogMessageInfo__get_Value__,
      v9);
    sub_B16FFC(&StringLiteral_1, v10);
    byte_40FD5BD = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !this->fields.restrictionBaseEntity )
    return (System_String_o *)StringLiteral_1;
  dialogMessageInfoDictionary = this->fields.dialogMessageInfoDictionary;
  if ( !dialogMessageInfoDictionary )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v16,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)dialogMessageInfoDictionary,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v16,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__MoveNext__) )
  {
    if ( !v16.fields.current.fields.value )
      sub_B170D4();
    if ( LODWORD(v16.fields.current.fields.value[1].klass) == pos )
    {
      DialogMessage = QuestRestrictionInfo__GetDialogMessage(this, (int32_t)v16.fields.current.fields.key, v12);
      v14 = 34;
      goto LABEL_11;
    }
  }
  DialogMessage = 0LL;
  v14 = 28;
LABEL_11:
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v16,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__QuestRestrictionInfo_DialogMessageInfo__Dispose__);
  if ( v14 != 34 )
    return (System_String_o *)StringLiteral_1;
  return DialogMessage;
}


int32_t __fastcall QuestRestrictionInfo__GetNeedStartingSvtCount(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  int32_t v7; // w19
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FD5C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v5);
    byte_40FD5C8 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0;
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)needStartingIndividualitiesList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v7 = 0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B170D4();
    v7 += LODWORD(v9.fields.current[1].monitor);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v7;
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetNeedStartingSvtIdList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x19
  struct System_Collections_Generic_List_int____o *needStartingIndividualitiesList; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD5C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_40FD5C5 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !this->fields.restrictionBaseEntity || !this->fields.isNeedStarting )
    return 0LL;
  v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  needStartingIndividualitiesList = this->fields.needStartingIndividualitiesList;
  if ( !needStartingIndividualitiesList )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)needStartingIndividualitiesList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__) )
  {
    if ( !v13 )
      sub_B170D4();
    System_Collections_Generic_List_int___AddRange(
      v13,
      (System_Collections_Generic_IEnumerable_T__o *)v16.fields.current,
      (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v13 )
LABEL_15:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_array *__fastcall QuestRestrictionInfo__GetPartyOrganizationServantSwapExplanationFixedServantText(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t FixedServantPositionCount; // w0
  const MethodInfo *v11; // x1
  int v12; // w21
  System_Int32_array *FixedServantPositionSvtIdList; // x0
  __int64 v14; // x2
  System_Int32_array *v15; // x20
  System_String_o *Name; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array *v19; // x19
  unsigned __int64 v20; // x24
  signed __int64 v21; // x25
  BattleServantConfConponent_o *i; // x21
  int32_t v23; // w22
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int64_t UserId; // x0
  int32_t maxLimitCount; // w22
  _BOOL4 SpoilerSetting; // w0
  int32_t v30; // w1
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x22
  UserServantCollectionEntity_o *v38; // [xsp+0h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FD5AA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&OptionManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&string___TypeInfo, v9);
    byte_40FD5AA = 1;
  }
  v38 = 0LL;
  entity = 0LL;
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    return 0LL;
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(this, method);
  if ( !FixedServantPositionCount )
    return 0LL;
  v12 = FixedServantPositionCount;
  FixedServantPositionSvtIdList = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(this, v11);
  if ( !FixedServantPositionSvtIdList )
    goto LABEL_42;
  v15 = FixedServantPositionSvtIdList;
  Name = (System_String_o *)sub_B17014(string___TypeInfo, FixedServantPositionSvtIdList->max_length, v14);
  v19 = (System_String_array *)Name;
  if ( v12 >= 1 )
  {
    v20 = 0LL;
    v21 = v12;
    for ( i = (BattleServantConfConponent_o *)&Name[1].monitor; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
    {
      if ( v20 >= v15->max_length )
      {
LABEL_43:
        sub_B17100(Name, v17, v18);
        sub_B170A0();
      }
      v23 = v15->m_Items[v20 + 1];
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !Master_WarQuestSelectionMaster )
        break;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              v23,
              (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
        return 0LL;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)Instance,
                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      if ( !UserServantCollectionMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v38, UserId, v23, 0LL) )
        goto LABEL_26;
      if ( !v38 )
        break;
      if ( UserServantCollectionEntity__IsGet(v38, 0LL) )
      {
        if ( !v38 )
          break;
        maxLimitCount = v38->fields.maxLimitCount;
      }
      else
      {
LABEL_26:
        maxLimitCount = -1;
      }
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      SpoilerSetting = OptionManager__GetSpoilerSetting(0LL);
      if ( !entity )
        break;
      v30 = maxLimitCount == -1 && !SpoilerSetting ? 0 : maxLimitCount;
      Name = ServantEntity__getName((ServantEntity_o *)entity, v30, -1, 0LL);
      if ( !v19 )
        break;
      v36 = (System_Int32_array **)Name;
      if ( Name )
      {
        Name = (System_String_o *)sub_B170BC(Name, v19->obj.klass->_1.element_class);
        if ( !Name )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v20 >= v19->max_length )
        goto LABEL_43;
      i->klass = (BattleServantConfConponent_c *)v36;
      sub_B16F98(i, v36, v18, v31, v32, v33, v34, v35);
      if ( (__int64)++v20 >= v21 )
        return v19;
    }
LABEL_42:
    sub_B170D4();
  }
  return v19;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_Restriction_RangeType__o *__fastcall QuestRestrictionInfo__GetRangeTypeList(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v4; // x8

  if ( !this->fields.restrictionBaseEntity )
    return 0LL;
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_8;
  if ( pos - 1 >= slotInfos->max_length )
  {
    sub_B17100(this, *(_QWORD *)&pos, method);
    sub_B170A0();
  }
  v4 = slotInfos->m_Items[pos - 1];
  if ( !v4 )
LABEL_8:
    sub_B170D4();
  return v4->fields.rangeTypeList;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetRestrictedName(
        QuestRestrictionInfo_o *this,
        int32_t pos,
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
  struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *restrictionSlotDictionary; // x0
  void *Item; // x0
  int v15; // w8
  void *v16; // x20
  unsigned int v17; // w19
  __int64 v18; // x21
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x26
  unsigned __int64 v20; // x27
  __int64 v21; // x23
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  __int64 v28; // x22
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v34; // x25
  __int64 v35; // x8
  System_String_o *v37; // [xsp+8h] [xbp-58h]

  if ( (byte_40FD5B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, *(_QWORD *)&pos);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v7);
    sub_B16FFC(&Method_System_Predicate_RestrictionEntity___ctor__, v8);
    sub_B16FFC(&System_Predicate_RestrictionEntity__TypeInfo, v9);
    sub_B16FFC(&Method_QuestRestrictionInfo___c__DisplayClass172_0__GetRestrictedName_b__0__, v10);
    sub_B16FFC(&QuestRestrictionInfo___c__DisplayClass172_0_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40FD5B7 = 1;
  }
  v37 = (System_String_o *)StringLiteral_1;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDictionary = this->fields.restrictionSlotDictionary;
    if ( restrictionSlotDictionary )
    {
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDictionary,
               pos,
               (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( Item )
      {
        v15 = *((_DWORD *)Item + 6);
        v16 = Item;
        if ( v15 >= 1 )
        {
          v17 = 0;
          while ( 1 )
          {
            if ( v17 >= v15 )
              goto LABEL_30;
            v18 = *((_QWORD *)v16 + (int)v17 + 4);
            if ( !v18 )
              goto LABEL_29;
            Item = (void *)System_String__IsNullOrEmpty(*(System_String_o **)(v18 + 32), 0LL);
            if ( ((unsigned __int8)Item & 1) == 0 )
              return *(System_String_o **)(v18 + 32);
            v15 = *((_DWORD *)v16 + 6);
            if ( (int)++v17 >= v15 )
              return v37;
          }
        }
        return v37;
      }
    }
LABEL_29:
    sub_B170D4();
  }
  questRestrictionEntityList = this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_29;
  if ( (int)questRestrictionEntityList->max_length >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      v21 = sub_B170CC(QuestRestrictionInfo___c__DisplayClass172_0_TypeInfo, *(_QWORD *)&pos, method, v3, v4);
      QuestRestrictionInfo___c__DisplayClass172_0___ctor((QuestRestrictionInfo___c__DisplayClass172_0_o *)v21, 0LL);
      if ( v20 >= questRestrictionEntityList->max_length )
        break;
      if ( !v21 )
        goto LABEL_29;
      v27 = (System_Int32_array **)questRestrictionEntityList->m_Items[v20];
      *(_QWORD *)(v21 + 16) = v27;
      v28 = v21 + 16;
      sub_B16F98(
        (BattleServantConfConponent_o *)(v21 + 16),
        v27,
        (System_String_array **)method,
        v22,
        v23,
        v24,
        v25,
        v26);
      myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
      v34 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_RestrictionEntity__TypeInfo,
                                                                       v30,
                                                                       v31,
                                                                       v32,
                                                                       v33);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v34,
        (Il2CppObject *)v21,
        Method_QuestRestrictionInfo___c__DisplayClass172_0__GetRestrictedName_b__0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_RestrictionEntity___ctor__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_29;
      Item = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
               (System_Predicate_T__o *)v34,
               (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( Item )
      {
        v35 = *((_QWORD *)Item + 6);
        if ( !v35 )
          goto LABEL_29;
        if ( !*(_DWORD *)(v35 + 24) )
          break;
        if ( *(_DWORD *)(v35 + 32) == pos )
        {
          if ( !*(_QWORD *)v28 )
            goto LABEL_29;
          v37 = *(System_String_o **)(*(_QWORD *)v28 + 48LL);
        }
      }
      if ( (__int64)++v20 >= (int)questRestrictionEntityList->max_length )
        return v37;
    }
LABEL_30:
    sub_B17100(Item, *(_QWORD *)&pos, method);
    sub_B170A0();
  }
  return v37;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetRestrictionMessage(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  int v7; // w8
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x9
  __int64 v9; // x20
  QuestRestrictionInfo_SlotInfo_o *v10; // x8
  struct QuestRestrictionInfo_SlotInfo_array *v12; // x8
  QuestRestrictionInfo_SlotInfo_o *v13; // x8

  v4 = this;
  if ( (byte_40FD594 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&initPos);
    sub_B16FFC(&StringLiteral_26, v5);
    this = (QuestRestrictionInfo_o *)sub_B16FFC(&StringLiteral_10330, v6);
    byte_40FD594 = 1;
  }
  if ( !v4->fields.restrictionBaseEntity )
    return v4->fields.restrictionMessage;
  v7 = initPos - 1;
  if ( initPos < 1 )
    return v4->fields.restrictionMessage;
  slotInfos = v4->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_17;
  if ( v7 >= slotInfos->max_length )
    goto LABEL_18;
  v9 = v7;
  v10 = slotInfos->m_Items[v7];
  if ( !v10 )
    goto LABEL_17;
  if ( System_String__IsNullOrEmpty(v10->fields.summary, 0LL) )
    return v4->fields.restrictionMessage;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (QuestRestrictionInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10330, 0LL);
  v12 = v4->fields.slotInfos;
  if ( !v12 )
LABEL_17:
    sub_B170D4();
  if ( (unsigned int)v9 >= v12->max_length )
  {
LABEL_18:
    sub_B17100(this, *(_QWORD *)&initPos, method);
    sub_B170A0();
  }
  v13 = v12->m_Items[v9];
  if ( !v13 )
    goto LABEL_17;
  return System_String__Concat_43746016(
           (System_String_o *)this,
           (System_String_o *)StringLiteral_26,
           v13->fields.summary,
           0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetServantNumMinRestriction(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantNumMin;
}


int32_t __fastcall QuestRestrictionInfo__GetServantNumRangeType(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  RestrictionBaseEntity_o *restrictionBaseEntity; // x0
  struct RestrictionEntity_o *servantNumRestrictionEntity; // x8
  int32_t servantNumMax; // w19
  BalanceConfig_c *v7; // x0

  if ( (byte_40FD5AB & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40FD5AB = 1;
  }
  if ( this->fields.servantNumMax < 1 )
    return 0;
  restrictionBaseEntity = this->fields.restrictionBaseEntity;
  if ( restrictionBaseEntity )
  {
    if ( RestrictionBaseEntity__HasFlag(restrictionBaseEntity, 8LL, 0LL) )
    {
      return 5;
    }
    else
    {
      servantNumMax = this->fields.servantNumMax;
      v7 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v7 = BalanceConfig_TypeInfo;
      }
      if ( servantNumMax <= v7->static_fields->DeckMainMemberMax )
        return 1;
      else
        return 4;
    }
  }
  else
  {
    servantNumRestrictionEntity = this->fields.servantNumRestrictionEntity;
    if ( !servantNumRestrictionEntity )
      sub_B170D4();
    return servantNumRestrictionEntity->fields.rangeType;
  }
}


int32_t __fastcall QuestRestrictionInfo__GetServantNumRestriction(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.servantNumMax;
}


System_String_o *__fastcall QuestRestrictionInfo__GetServantNumRestrictionDialogMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestRestrictionInfo_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  unsigned int v10; // w21
  RestrictionWholeEntity_o *v11; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x0
  int32_t v13; // w20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *restrictionSlotDictionary; // x0
  int dialogMessageInfoDictionary; // w8
  QuestRestrictionInfo_o *v16; // x21
  unsigned int v17; // w26
  __int64 v18; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int v22; // w9
  unsigned int v23; // w10
  RestrictionEntity_o *v24; // x11
  WarEntity_o *v25; // x8
  WarEntity_o *v26; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_40FD5AD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_RestrictionMessageMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v6);
    this = (QuestRestrictionInfo_o *)sub_B16FFC(&StringLiteral_1, v7);
    byte_40FD5AD = 1;
  }
  entity = 0LL;
  v26 = 0LL;
  if ( v3->fields.restrictionBaseEntity )
  {
    restrictionWholeEntities = v3->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
      goto LABEL_51;
    max_length = restrictionWholeEntities->max_length;
    if ( max_length < 1 )
    {
LABEL_17:
      if ( v3->fields.servantNumMin < 1 )
        return (System_String_o *)StringLiteral_1;
      v13 = 1;
      while ( 1 )
      {
        restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v3->fields.restrictionSlotDictionary;
        if ( !restrictionSlotDictionary )
          goto LABEL_51;
        this = (QuestRestrictionInfo_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                           restrictionSlotDictionary,
                                           v13,
                                           (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
        if ( !this )
          goto LABEL_51;
        dialogMessageInfoDictionary = (int)this->fields.dialogMessageInfoDictionary;
        v16 = this;
        if ( dialogMessageInfoDictionary >= 1 )
          break;
LABEL_33:
        if ( ++v13 > v3->fields.servantNumMin )
          return (System_String_o *)StringLiteral_1;
      }
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= dialogMessageInfoDictionary )
          goto LABEL_52;
        v18 = *((_QWORD *)&v16->fields.eventId + (int)v17);
        if ( !v18 )
          goto LABEL_51;
        if ( *(_DWORD *)(v18 + 44) && !*(_DWORD *)(v18 + 40) )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_51;
          this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             Master_WarQuestSelectionMaster,
                                             &v26,
                                             *(_DWORD *)(v18 + 44),
                                             (const MethodInfo_266F3E4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        dialogMessageInfoDictionary = (int)v16->fields.dialogMessageInfoDictionary;
        if ( (int)++v17 >= dialogMessageInfoDictionary )
          goto LABEL_33;
      }
      v25 = v26;
      if ( !v26 )
        goto LABEL_51;
    }
    else
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= max_length )
          goto LABEL_52;
        v11 = restrictionWholeEntities->m_Items[v10];
        if ( !v11 )
          goto LABEL_51;
        if ( v11->fields.restrictionMessageId && v11->fields.type == 3 )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
          if ( !v12 )
            goto LABEL_51;
          this = (QuestRestrictionInfo_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             v12,
                                             &entity,
                                             v11->fields.restrictionMessageId,
                                             (const MethodInfo_266F3E4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
        }
        max_length = restrictionWholeEntities->max_length;
        if ( (int)++v10 >= max_length )
          goto LABEL_17;
      }
      v25 = entity;
      if ( !entity )
        goto LABEL_51;
    }
    return v25->fields.age;
  }
  else
  {
    restrictionEntityList = v3->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_51;
    v22 = restrictionEntityList->max_length;
    if ( v22 >= 1 )
    {
      v23 = 0;
      method = 0LL;
      while ( 1 )
      {
        if ( v23 >= v22 )
        {
LABEL_52:
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v24 = restrictionEntityList->m_Items[v23];
        if ( !v24 )
          break;
        if ( v24->fields.type == 10 )
          method = (const MethodInfo *)v23;
        else
          method = (const MethodInfo *)(unsigned int)method;
        if ( (int)++v23 >= v22 )
          return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
      }
LABEL_51:
      sub_B170D4();
    }
    LODWORD(method) = 0;
    return QuestRestrictionInfo__GetDialogMessage(v3, (int32_t)method, v2);
  }
}


System_String_o *__fastcall QuestRestrictionInfo__GetServantNumRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t ServantNumRangeType; // w0
  int32_t servantNumMax; // w20
  BalanceConfig_c *v9; // x0
  System_String_o *v10; // x20
  int32_t *v11; // x1
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+8h] [xbp-18h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FD5AC & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_10371, v5);
    sub_B16FFC(&StringLiteral_10370, v6);
    byte_40FD5AC = 1;
  }
  ServantNumRangeType = QuestRestrictionInfo__GetServantNumRangeType(this, method);
  if ( ServantNumRangeType == 5 )
    goto LABEL_20;
  if ( ServantNumRangeType != 4 )
    goto LABEL_21;
  servantNumMax = this->fields.servantNumMax;
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  if ( servantNumMax > v9->static_fields->DeckMainMemberMax )
  {
LABEL_20:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10371, 0LL);
    v11 = &v15;
    v15 = this->fields.servantNumMax;
  }
  else
  {
LABEL_21:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_10370, 0LL);
    v11 = &v14;
    v14 = this->fields.servantNumMax;
  }
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v11);
  return System_String__Format(v10, v12, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetSupportInitIndex(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.supportInitIndex;
}


System_String_o *__fastcall QuestRestrictionInfo__GetSupportOnlyRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_40FD595 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10372, v2);
    byte_40FD595 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10372, 0LL);
}


System_Int32_array *__fastcall QuestRestrictionInfo__GetSvtIdBattleList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.svtIdForceBattleList;
}


int32_t __fastcall QuestRestrictionInfo__GetTotalCostRestriction(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  RestrictionEntity_o *totalCostRestrictionEntity; // x0

  totalCostRestrictionEntity = this->fields.totalCostRestrictionEntity;
  if ( totalCostRestrictionEntity )
    LODWORD(totalCostRestrictionEntity) = RestrictionEntity__getTotalCost(totalCostRestrictionEntity, 0LL);
  return (int)totalCostRestrictionEntity;
}


System_String_o *__fastcall QuestRestrictionInfo__GetTotalCostRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  System_String_c *klass; // x19
  Il2CppObject *v5; // x0
  int32_t TotalCost; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FD5A4 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    byte_40FD5A4 = 1;
  }
  result = (System_String_o *)this->fields.totalCostRestrictionEntity;
  if ( result )
  {
    klass = result[1].klass;
    TotalCost = RestrictionEntity__getTotalCost((RestrictionEntity_o *)result, 0LL);
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &TotalCost);
    return System_String__Format((System_String_o *)klass, v5, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfo__GetUniqueIndividualityRestrictionMessage(
        QuestRestrictionInfo_o *this,
        bool isFixMessage,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x8
  int max_length; // w9
  unsigned int v9; // w10
  RestrictionWholeEntity_o *v10; // x11

  v4 = this;
  if ( (byte_40FD59B & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, isFixMessage);
    sub_B16FFC(&StringLiteral_10374, v5);
    this = (QuestRestrictionInfo_o *)sub_B16FFC(&StringLiteral_1, v6);
    byte_40FD59B = 1;
  }
  if ( !v4->fields.restrictionBaseEntity || isFixMessage )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    return LocalizationManager__Get((System_String_o *)StringLiteral_10374, 0LL);
  }
  else
  {
    restrictionWholeEntities = v4->fields.restrictionWholeEntities;
    if ( !restrictionWholeEntities )
LABEL_19:
      sub_B170D4();
    max_length = restrictionWholeEntities->max_length;
    if ( max_length < 1 )
    {
      return (System_String_o *)StringLiteral_1;
    }
    else
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
        {
          sub_B17100(this, isFixMessage, method);
          sub_B170A0();
        }
        v10 = restrictionWholeEntities->m_Items[v9];
        if ( !v10 )
          goto LABEL_19;
        if ( v10->fields.type == 9 )
          return v10->fields.summary;
        if ( (int)++v9 >= max_length )
          return (System_String_o *)StringLiteral_1;
      }
    }
  }
}


System_String_o *__fastcall QuestRestrictionInfo__GetUniqueServantRestrictionMessage(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_40FD59A & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_10373, v2);
    byte_40FD59A = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_10373, 0LL);
}


int32_t __fastcall QuestRestrictionInfo__GetUserEventDeckNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.eventDeckNum;
}


bool __fastcall QuestRestrictionInfo__IsAllOutBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isAllOutBattle;
}


bool __fastcall QuestRestrictionInfo__IsConvertOverwriteImage(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Int32_array *overwriteLimitCountSvtIds; // x10
  int max_length; // w8
  __int64 v5; // x9
  int32_t *v6; // x10

  overwriteLimitCountSvtIds = this->fields.overwriteLimitCountSvtIds;
  if ( !overwriteLimitCountSvtIds )
    return 0;
  if ( !this->fields.overwriteLimitCounts )
    return 0;
  max_length = overwriteLimitCountSvtIds->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0LL;
  v6 = &overwriteLimitCountSvtIds->m_Items[1];
  while ( v6[v5] != svtId )
  {
    if ( (int)++v5 >= max_length )
      return 0;
  }
  return 1;
}


bool __fastcall QuestRestrictionInfo__IsDataLostBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isDataLostBattle;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsEditablePos(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v4; // x8

  if ( !this->fields.restrictionBaseEntity )
    return 1;
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_8;
  if ( initPos - 1 >= slotInfos->max_length )
  {
    sub_B17100(this, *(_QWORD *)&initPos, method);
    sub_B170A0();
  }
  v4 = slotInfos->m_Items[initPos - 1];
  if ( !v4 )
LABEL_8:
    sub_B170D4();
  return v4->fields.isMoved;
}


bool __fastcall QuestRestrictionInfo__IsEmpty(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  struct RestrictionEntity_array *restrictionEntityList; // x8

  if ( this->fields.restrictionBaseEntity )
    return 0;
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    sub_B170D4();
  return restrictionEntityList->max_length == 0;
}


bool __fastcall QuestRestrictionInfo__IsFatigure(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFatigure;
}


bool __fastcall QuestRestrictionInfo__IsFirstServantNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct RestrictionEntity_array *restrictionEntityList; // x8
  int max_length; // w9
  unsigned int v5; // w12
  signed int v6; // w10
  signed int v7; // w11
  RestrictionEntity_o *v8; // x13
  int32_t type; // w13

  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_17;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v8 = restrictionEntityList->m_Items[v5];
      if ( !v8 )
        break;
      type = v8->fields.type;
      switch ( type )
      {
        case 8:
          v6 = v5;
          break;
        case 10:
          v7 = v5;
          break;
        case 14:
          v6 = v5;
          break;
      }
      if ( (int)++v5 >= max_length )
        return v6 != 0 && v6 > v7;
    }
LABEL_17:
    sub_B170D4();
  }
  v7 = 0;
  v6 = 0;
  return v6 != 0 && v6 > v7;
}


bool __fastcall QuestRestrictionInfo__IsFixedMyServantPosition(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFixedMyServantPosition;
}


bool __fastcall QuestRestrictionInfo__IsFixedMyServantSingleRestriction(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.isFixedMyServantSingle;
}


bool __fastcall QuestRestrictionInfo__IsFixedServantPosition(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFixedMyServantPosition || this->fields.isNeedStarting || this->fields.isFixedPosition;
}


bool __fastcall QuestRestrictionInfo__IsFixedServantPositionIncludeSupport(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.isNeedStarting || this->fields.isFixedPosition;
}


bool __fastcall QuestRestrictionInfo__IsFixedSupportPosition(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isFixedSupportPosition || this->fields.isFixedNpcPosition;
}


bool __fastcall QuestRestrictionInfo__IsFixedSupportPositionIndividuality(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x19
  struct System_Collections_Generic_List_int____o *fixedSupportIndividualitiesList; // x0
  struct System_Collections_Generic_List_int____o *fixedNpcIndividualitiesList; // x0
  int v17; // w20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  int v19[2]; // [xsp+20h] [xbp-50h]
  int v20; // [xsp+28h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_40FD5C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_40FD5C0 = 1;
  }
  memset(&i, 0, sizeof(i));
  v20 = 0;
  if ( !this->fields.isFixedSupportPosition && !this->fields.isFixedNpcPosition || !this->fields.restrictionBaseEntity )
    return 0;
  v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !this->fields.isFixedSupportPosition )
  {
    fixedNpcIndividualitiesList = this->fields.fixedNpcIndividualitiesList;
    if ( fixedNpcIndividualitiesList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v18,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedNpcIndividualitiesList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
      for ( i = v18;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &i,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
            System_Collections_Generic_List_int___AddRange(
              v13,
              (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
              (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__) )
      {
        if ( !v13 )
          sub_B170D4();
      }
      v19[0] = 142;
      v17 = ++v20;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &i,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
      if ( !v17 || v19[v17 - 1] != 142 )
        goto LABEL_14;
      v20 = v17 - 1;
      if ( v13 )
        return v13->fields._size > 0;
    }
LABEL_26:
    sub_B170D4();
  }
  fixedSupportIndividualitiesList = this->fields.fixedSupportIndividualitiesList;
  if ( !fixedSupportIndividualitiesList )
    goto LABEL_26;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixedSupportIndividualitiesList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v18;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        System_Collections_Generic_List_int___AddRange(
          v13,
          (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
          (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__) )
  {
    if ( !v13 )
      sub_B170D4();
  }
  v19[0] = 142;
  v20 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  v20 = 0;
LABEL_14:
  if ( !v13 )
    goto LABEL_26;
  return v13->fields._size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsFixedSupportPosition_31246152(
        QuestRestrictionInfo_o *this,
        int32_t num,
        ServantLeaderInfo_o *servantInfo,
        const MethodInfo *method)
{
  __int64 v4; // x4
  QuestRestrictionInfo_o *v7; // x20
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
  System_Collections_Generic_List_int__o *v23; // x22
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *fixedSupportIndividualitiesList; // x0
  int v26; // w26
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x23
  __int64 v29; // x24
  __int64 v30; // x25
  int32_t v31; // w0
  ServantEntity_o *Entity; // x23
  int32_t current; // w22
  int32_t limitCount; // w24
  int32_t DispLimitCount; // w0
  int v36; // w21
  int v37; // w26
  struct System_Boolean_array *supportPositionList; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *fixedNpcIndividualitiesList; // x0
  int v40; // w8
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+0h] [xbp-B0h] BYREF
  int v42[4]; // [xsp+18h] [xbp-98h]
  int v43; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+50h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  v7 = this;
  if ( (byte_40FD59C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&num);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____GetEnumerator__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v20);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v21);
    this = (QuestRestrictionInfo_o *)sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    byte_40FD59C = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v44, 0, sizeof(v44));
  v43 = 0;
  if ( v7->fields.isFixedSupportPosition )
  {
    if ( !v7->fields.isFixedNpcPosition )
      goto LABEL_9;
  }
  else if ( !v7->fields.isFixedNpcPosition )
  {
    return 0;
  }
  if ( !servantInfo )
    goto LABEL_53;
  this = (QuestRestrictionInfo_o *)ServantLeaderInfo__IsNpc(servantInfo, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
LABEL_9:
  if ( !v7->fields.restrictionBaseEntity )
    goto LABEL_38;
  v23 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&num,
                                                    servantInfo,
                                                    method,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v7->fields.isFixedSupportPosition )
  {
    fixedSupportIndividualitiesList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v7->fields.fixedSupportIndividualitiesList;
    if ( !fixedSupportIndividualitiesList )
      goto LABEL_53;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v41,
      fixedSupportIndividualitiesList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    for ( i = v41;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
          System_Collections_Generic_List_int___AddRange(
            v23,
            (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
            (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__) )
    {
      if ( !v23 )
        sub_B170D4();
    }
    v42[0] = 170;
    v43 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    v26 = 0;
    v43 = 0;
LABEL_18:
    if ( !v23 )
      goto LABEL_53;
    goto LABEL_19;
  }
  fixedNpcIndividualitiesList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v7->fields.fixedNpcIndividualitiesList;
  if ( !fixedNpcIndividualitiesList )
    goto LABEL_53;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    fixedNpcIndividualitiesList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  for ( i = v41;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
        System_Collections_Generic_List_int___AddRange(
          v23,
          (System_Collections_Generic_IEnumerable_T__o *)i.fields.current,
          (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__) )
  {
    if ( !v23 )
      sub_B170D4();
  }
  v42[0] = 170;
  v26 = ++v43;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  if ( !v26 )
    goto LABEL_18;
  v40 = v26 - 1;
  if ( v42[v26 - 1] != 170 )
    goto LABEL_18;
  --v26;
  v43 = v40;
  if ( !v23 )
    goto LABEL_53;
LABEL_19:
  if ( v23->fields._size < 1 )
    goto LABEL_38;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !servantInfo )
    goto LABEL_53;
  v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  v30 = *(_QWORD *)&servantInfo->fields.svtId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&servantInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v30;
  *(_QWORD *)&v46.fields.fakeValue = v29;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v46, 0LL);
  if ( !v28 )
LABEL_53:
    sub_B170D4();
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v28,
                                v31,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  System_Collections_Generic_List_int___GetEnumerator(
    &v41,
    v23,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v44 = v41;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v44,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = (int32_t)v44.fields.current;
    limitCount = servantInfo->fields.limitCount;
    DispLimitCount = ServantLeaderInfo__getDispLimitCount(servantInfo, 0LL);
    if ( !Entity )
      sub_B170D4();
    if ( ServantEntity__IsIndividuality(Entity, limitCount, DispLimitCount, current, 0LL) )
    {
      v36 = 1;
      goto LABEL_34;
    }
  }
  v36 = 0;
LABEL_34:
  v42[v26] = 277;
  v37 = ++v43;
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v44,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v37 && v42[v37 - 1] == 277 )
    v43 = v37 - 1;
  if ( !v36 )
    return 1;
LABEL_38:
  supportPositionList = v7->fields.supportPositionList;
  if ( !supportPositionList )
    goto LABEL_53;
  if ( supportPositionList->max_length <= num )
  {
    sub_B17100(this, *(_QWORD *)&num, servantInfo);
    sub_B170A0();
  }
  return !supportPositionList->m_Items[num + 4];
}


bool __fastcall QuestRestrictionInfo__IsMyServantNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.myServantNumMax > 0;
}


bool __fastcall QuestRestrictionInfo__IsMyServantOrNpcRestriction(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.isMyServantOrNpc || this->fields.isMyServantOrSupport;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  QuestRestrictionInfo___c__DisplayClass167_0_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v18; // x8
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x20

  if ( (byte_40FD5B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__Exists__, *(_QWORD *)&pos);
    sub_B16FFC(&Method_System_Predicate_RestrictionEntity___ctor__, v7);
    sub_B16FFC(&System_Predicate_RestrictionEntity__TypeInfo, v8);
    sub_B16FFC(&Method_QuestRestrictionInfo___c__DisplayClass167_0__IsMyServantOrNpcRestriction_b__0__, v9);
    sub_B16FFC(&QuestRestrictionInfo___c__DisplayClass167_0_TypeInfo, v10);
    byte_40FD5B2 = 1;
  }
  v11 = (QuestRestrictionInfo___c__DisplayClass167_0_o *)sub_B170CC(
                                                           QuestRestrictionInfo___c__DisplayClass167_0_TypeInfo,
                                                           *(_QWORD *)&pos,
                                                           method,
                                                           v3,
                                                           v4);
  QuestRestrictionInfo___c__DisplayClass167_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_14;
  v11->fields.pos = pos;
  if ( !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    return 0;
  if ( this->fields.restrictionBaseEntity )
  {
    slotInfos = this->fields.slotInfos;
    if ( slotInfos )
    {
      if ( pos - 1 >= slotInfos->max_length )
      {
        sub_B17100(v12, v13, v14);
        sub_B170A0();
      }
      v18 = slotInfos->m_Items[pos - 1];
      if ( v18 )
        return (unsigned int)(v18->fields.slotType - 3) < 2;
    }
LABEL_14:
    sub_B170D4();
  }
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_RestrictionEntity__TypeInfo,
                                                                   v13,
                                                                   v14,
                                                                   v15,
                                                                   v16);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v21,
    (Il2CppObject *)v11,
    Method_QuestRestrictionInfo___c__DisplayClass167_0__IsMyServantOrNpcRestriction_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_14;
  return System_Collections_Generic_List_MapControl_SpotRoadInfo___Exists(
           (System_Collections_Generic_List_MapControl_SpotRoadInfo__o *)myServantOrNpcRestrictionEntityList,
           (System_Predicate_T__o *)v21,
           (const MethodInfo_2F26564 *)Method_System_Collections_Generic_List_RestrictionEntity__Exists__);
}


bool __fastcall QuestRestrictionInfo__IsNoSupportBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNoSupportBattle;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsNotIndividuality(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  QuestRestrictionInfo___c__DisplayClass169_0_o *v12; // x21
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *restrictionSlotDetailDictionary; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  int EvalValueWarsituation_k__BackingField_low; // w8
  unsigned int v23; // w9
  __int64 v24; // x10
  __int64 v25; // x10
  peRenderTexture_ChangeLayerObject_o *v26; // x0
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x20
  struct UnityEngine_Material_o *changeMaterial; // x8

  if ( (byte_40FD5B4 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      *(_QWORD *)&pos);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v7);
    sub_B16FFC(&Method_System_Predicate_RestrictionEntity___ctor__, v8);
    sub_B16FFC(&System_Predicate_RestrictionEntity__TypeInfo, v9);
    sub_B16FFC(&Method_QuestRestrictionInfo___c__DisplayClass169_0__IsNotIndividuality_b__0__, v10);
    sub_B16FFC(&QuestRestrictionInfo___c__DisplayClass169_0_TypeInfo, v11);
    byte_40FD5B4 = 1;
  }
  v12 = (QuestRestrictionInfo___c__DisplayClass169_0_o *)sub_B170CC(
                                                           QuestRestrictionInfo___c__DisplayClass169_0_TypeInfo,
                                                           *(_QWORD *)&pos,
                                                           method,
                                                           v3,
                                                           v4);
  QuestRestrictionInfo___c__DisplayClass169_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_23;
  v12->fields.pos = pos;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(this, pos, v13) )
  {
    if ( this->fields.restrictionBaseEntity )
    {
      restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
      if ( !restrictionSlotDetailDictionary )
        goto LABEL_23;
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
               v12->fields.pos,
               (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
      if ( !Item )
        goto LABEL_23;
      EvalValueWarsituation_k__BackingField_low = LODWORD(Item->fields._EvalValueWarsituation_k__BackingField);
      if ( EvalValueWarsituation_k__BackingField_low >= 1 )
      {
        v23 = 0;
        while ( 1 )
        {
          if ( v23 >= EvalValueWarsituation_k__BackingField_low )
          {
            sub_B17100(Item, v20, v21);
            sub_B170A0();
          }
          v24 = *((_QWORD *)&Item->fields._EvalValue_k__BackingField + (int)v23);
          if ( !v24 )
            break;
          if ( *(_DWORD *)(v24 + 32) == 1 )
          {
            v25 = *(_QWORD *)(v24 + 40);
            if ( v25 )
            {
              if ( *(_QWORD *)(v25 + 24) )
                goto LABEL_17;
            }
          }
          if ( (int)++v23 >= EvalValueWarsituation_k__BackingField_low )
            goto LABEL_16;
        }
LABEL_23:
        sub_B170D4();
      }
LABEL_16:
      LOBYTE(v26) = 1;
    }
    else
    {
      myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
      v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_RestrictionEntity__TypeInfo,
                                                                       v14,
                                                                       v15,
                                                                       v16,
                                                                       v17);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v28,
        (Il2CppObject *)v12,
        Method_QuestRestrictionInfo___c__DisplayClass169_0__IsNotIndividuality_b__0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_RestrictionEntity___ctor__);
      if ( !myServantOrNpcRestrictionEntityList )
        goto LABEL_23;
      v26 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v28,
              (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( v26 )
      {
        changeMaterial = v26->fields.changeMaterial;
        if ( !changeMaterial )
          goto LABEL_23;
        LOBYTE(v26) = LODWORD(changeMaterial[1].klass) == 0;
      }
    }
  }
  else
  {
LABEL_17:
    LOBYTE(v26) = 0;
  }
  return (char)v26;
}


bool __fastcall QuestRestrictionInfo__IsNotSingleSupportOnly(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNotSingleSupportOnly;
}


bool __fastcall QuestRestrictionInfo__IsNotTransitionSupportList(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotTransitionSupportList;
}


bool __fastcall QuestRestrictionInfo__IsNpcEditablePos(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNpcEditablePos;
}


bool __fastcall QuestRestrictionInfo__IsNpcMulitipleOrOnly(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNpcMultipleBattle || this->fields.isNpcOnlyBattle;
}


bool __fastcall QuestRestrictionInfo__IsNpcMulitpleBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNpcMultipleBattle;
}


bool __fastcall QuestRestrictionInfo__IsNpcOnlyBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNpcOnlyBattle;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsPositionFixNpc(
        QuestRestrictionInfo_o *this,
        int32_t initPos,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v4; // x8

  if ( this->fields.restrictionBaseEntity )
  {
    slotInfos = this->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_10;
    if ( initPos - 1 >= slotInfos->max_length )
    {
      sub_B17100(this, *(_QWORD *)&initPos, method);
      sub_B170A0();
    }
    v4 = slotInfos->m_Items[initPos - 1];
    if ( !v4 )
LABEL_10:
      sub_B170D4();
    return v4->fields.slotType == 1 && !QuestRestrictionInfo__IsEditablePos(this, initPos, method);
  }
  else
  {
    return 1;
  }
}


bool __fastcall QuestRestrictionInfo__IsRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isRestriction;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestrictionServantIndividuality(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t pos,
        bool isChkSupport,
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
  QuestRestrictionInfo___c__DisplayClass170_0_o *v23; // x24
  const MethodInfo *v24; // x2
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t ServantImageLimitSealAfter; // w20
  WebViewManager_o *v28; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  ServantEntity_o *Entity; // x21
  struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *restrictionSlotDictionary; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  unsigned __int64 EvalValueWarsituation_k__BackingField_low; // x8
  unsigned __int64 i; // x9
  __int64 v41; // x12
  int v42; // w25
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v44; // x23
  peRenderTexture_ChangeLayerObject_o *v45; // x0
  struct UnityEngine_Material_o *changeMaterial; // x8
  RestrictionEntity_o *v47; // x22
  UnityEngine_Material_c *klass; // x8
  System_Int32_array *v49; // x0
  struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *restrictionSlotDetailDictionary; // x0
  __int64 v51; // x9
  WarBoardEvalValueSquare_EvalValueSquare_o *v52; // x22
  unsigned __int64 v53; // x24
  RestrictionSlotDetailEntity_o *v54; // x23
  struct System_Int32_array *targetVals; // x9
  System_Int32_array *Individuality; // x0

  if ( (byte_40FD5B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v17);
    sub_B16FFC(&Method_System_Predicate_RestrictionEntity___ctor__, v18);
    sub_B16FFC(&System_Predicate_RestrictionEntity__TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&Method_QuestRestrictionInfo___c__DisplayClass170_0__IsRestrictionServantIndividuality_b__0__, v21);
    sub_B16FFC(&QuestRestrictionInfo___c__DisplayClass170_0_TypeInfo, v22);
    byte_40FD5B5 = 1;
  }
  v23 = (QuestRestrictionInfo___c__DisplayClass170_0_o *)sub_B170CC(
                                                           QuestRestrictionInfo___c__DisplayClass170_0_TypeInfo,
                                                           *(_QWORD *)&svtId,
                                                           *(_QWORD *)&limitCount,
                                                           *(_QWORD *)&dispLimitCount,
                                                           *(_QWORD *)&pos);
  QuestRestrictionInfo___c__DisplayClass170_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_52;
  v23->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(this, pos, v24) )
    goto LABEL_50;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_52;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v28 )
    goto LABEL_52;
  v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v28,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v29 )
    goto LABEL_52;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v29,
                                svtId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDictionary = this->fields.restrictionSlotDictionary;
    if ( restrictionSlotDictionary )
    {
      Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDictionary,
               v23->fields.pos,
               (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Item__);
      if ( Item )
      {
        EvalValueWarsituation_k__BackingField_low = LODWORD(Item->fields._EvalValueWarsituation_k__BackingField);
        if ( (__int64)(EvalValueWarsituation_k__BackingField_low << 32) >= 1 )
        {
          for ( i = 0LL; (__int64)i < (int)EvalValueWarsituation_k__BackingField_low; ++i )
          {
            if ( i >= EvalValueWarsituation_k__BackingField_low )
            {
LABEL_53:
              sub_B17100(Item, v37, v38);
              sub_B170A0();
            }
            v41 = *((_QWORD *)&Item->fields._EvalValue_k__BackingField + i);
            if ( isChkSupport )
            {
              if ( !v41 )
                goto LABEL_52;
              if ( *(_DWORD *)(v41 + 28) == 2 )
                goto LABEL_31;
            }
            else
            {
              if ( !v41 )
                goto LABEL_52;
              if ( *(_DWORD *)(v41 + 28) == 1 )
              {
LABEL_31:
                v42 = *(_DWORD *)(v41 + 40);
                goto LABEL_32;
              }
            }
          }
        }
        v42 = -1;
LABEL_32:
        restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
        if ( restrictionSlotDetailDictionary )
        {
          Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
                   v23->fields.pos,
                   (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
          if ( Item )
          {
            v51 = *(_QWORD *)&Item->fields._EvalValueWarsituation_k__BackingField;
            v52 = Item;
            if ( (int)v51 >= 1 )
            {
              LOBYTE(klass) = 0;
              v53 = 0LL;
              while ( 1 )
              {
                if ( v53 >= (unsigned int)v51 )
                  goto LABEL_53;
                v54 = (RestrictionSlotDetailEntity_o *)*((_QWORD *)&v52->fields._EvalValue_k__BackingField + v53);
                if ( (v42 & 0x80000000) != 0 )
                {
                  if ( !v54 )
                    goto LABEL_52;
                }
                else
                {
                  if ( !v54 )
                    goto LABEL_52;
                  if ( v42 != v54->fields.id )
                    goto LABEL_48;
                }
                if ( v54->fields.type == 1 )
                {
                  targetVals = v54->fields.targetVals;
                  if ( targetVals )
                  {
                    if ( *(_QWORD *)&targetVals->max_length )
                    {
                      if ( !Entity )
                        goto LABEL_52;
                      Individuality = ServantEntity__getIndividuality(
                                        Entity,
                                        limitCount,
                                        ServantImageLimitSealAfter,
                                        0LL);
                      Item = (WarBoardEvalValueSquare_EvalValueSquare_o *)RestrictionSlotDetailEntity__IsIndividuality(
                                                                            v54,
                                                                            Individuality,
                                                                            0LL);
                      if ( ((unsigned __int8)Item & 1) != 0 )
                        goto LABEL_50;
                      LOBYTE(klass) = 1;
                    }
                  }
                }
LABEL_48:
                *(float *)&v51 = v52->fields._EvalValueWarsituation_k__BackingField;
                if ( (__int64)++v53 >= (int)v51 )
                  return (char)klass;
              }
            }
            goto LABEL_50;
          }
        }
      }
    }
LABEL_52:
    sub_B170D4();
  }
  if ( isChkSupport )
    goto LABEL_50;
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v44 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_RestrictionEntity__TypeInfo,
                                                                   v30,
                                                                   v31,
                                                                   v32,
                                                                   v33);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v44,
    (Il2CppObject *)v23,
    Method_QuestRestrictionInfo___c__DisplayClass170_0__IsRestrictionServantIndividuality_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_52;
  v45 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
          (System_Predicate_T__o *)v44,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v45 )
    goto LABEL_50;
  changeMaterial = v45->fields.changeMaterial;
  v47 = (RestrictionEntity_o *)v45;
  if ( !changeMaterial )
    goto LABEL_52;
  klass = changeMaterial[1].klass;
  if ( klass )
  {
    if ( !Entity )
      goto LABEL_52;
    v49 = ServantEntity__getIndividuality(Entity, limitCount, ServantImageLimitSealAfter, 0LL);
    if ( RestrictionEntity__IsRestriction_29671008(v47, v49, 0LL) )
    {
      LOBYTE(klass) = 1;
      return (char)klass;
    }
LABEL_50:
    LOBYTE(klass) = 0;
  }
  return (char)klass;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsRestrictionServantIndividuality_31261700(
        QuestRestrictionInfo_o *this,
        System_Int32_array *individuality,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  QuestRestrictionInfo___c__DisplayClass171_0_o *v13; // x22
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *restrictionSlotDetailDictionary; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  int EvalValueWarsituation_k__BackingField_low; // w9
  WarBoardEvalValueSquare_EvalValueSquare_o *v24; // x20
  unsigned int v25; // w21
  __int64 v26; // x8
  __int64 v27; // x9
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v29; // x21
  RestrictionEntity_o *v30; // x0
  struct System_Int32_array *targetVals; // x8

  if ( (byte_40FD5B6 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__,
      individuality);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, v8);
    sub_B16FFC(&Method_System_Predicate_RestrictionEntity___ctor__, v9);
    sub_B16FFC(&System_Predicate_RestrictionEntity__TypeInfo, v10);
    sub_B16FFC(&Method_QuestRestrictionInfo___c__DisplayClass171_0__IsRestrictionServantIndividuality_b__0__, v11);
    sub_B16FFC(&QuestRestrictionInfo___c__DisplayClass171_0_TypeInfo, v12);
    byte_40FD5B6 = 1;
  }
  v13 = (QuestRestrictionInfo___c__DisplayClass171_0_o *)sub_B170CC(
                                                           QuestRestrictionInfo___c__DisplayClass171_0_TypeInfo,
                                                           individuality,
                                                           *(_QWORD *)&pos,
                                                           method,
                                                           v4);
  QuestRestrictionInfo___c__DisplayClass171_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_26;
  v13->fields.pos = pos;
  if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(this, pos, v14) )
    goto LABEL_24;
  if ( this->fields.restrictionBaseEntity )
  {
    restrictionSlotDetailDictionary = this->fields.restrictionSlotDetailDictionary;
    if ( !restrictionSlotDetailDictionary )
      goto LABEL_26;
    Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
             (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionSlotDetailDictionary,
             v13->fields.pos,
             (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
    if ( !Item )
      goto LABEL_26;
    EvalValueWarsituation_k__BackingField_low = LODWORD(Item->fields._EvalValueWarsituation_k__BackingField);
    v24 = Item;
    if ( EvalValueWarsituation_k__BackingField_low >= 1 )
    {
      v25 = 0;
      LOBYTE(v26) = 0;
      while ( 1 )
      {
        if ( v25 >= EvalValueWarsituation_k__BackingField_low )
        {
          sub_B17100(Item, v21, v22);
          sub_B170A0();
        }
        Item = (WarBoardEvalValueSquare_EvalValueSquare_o *)*((_QWORD *)&v24->fields._EvalValue_k__BackingField
                                                            + (int)v25);
        if ( !Item )
          break;
        if ( LODWORD(Item->fields._EvalValue_k__BackingField) == 1 )
        {
          v27 = *(_QWORD *)&Item->fields._WarAdjustmentValueB_k__BackingField;
          if ( v27 )
          {
            if ( *(_QWORD *)(v27 + 24) )
            {
              Item = (WarBoardEvalValueSquare_EvalValueSquare_o *)RestrictionSlotDetailEntity__IsIndividuality(
                                                                    (RestrictionSlotDetailEntity_o *)Item,
                                                                    individuality,
                                                                    0LL);
              if ( ((unsigned __int8)Item & 1) != 0 )
                goto LABEL_24;
              LOBYTE(v26) = 1;
            }
          }
        }
        EvalValueWarsituation_k__BackingField_low = LODWORD(v24->fields._EvalValueWarsituation_k__BackingField);
        if ( (int)++v25 >= EvalValueWarsituation_k__BackingField_low )
          return v26 & 1;
      }
LABEL_26:
      sub_B170D4();
    }
    goto LABEL_24;
  }
  myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
  v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_RestrictionEntity__TypeInfo,
                                                                   v15,
                                                                   v16,
                                                                   v17,
                                                                   v18);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v29,
    (Il2CppObject *)v13,
    Method_QuestRestrictionInfo___c__DisplayClass171_0__IsRestrictionServantIndividuality_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_RestrictionEntity___ctor__);
  if ( !myServantOrNpcRestrictionEntityList )
    goto LABEL_26;
  v30 = (RestrictionEntity_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                 (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
                                 (System_Predicate_T__o *)v29,
                                 (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
  if ( !v30 )
  {
LABEL_24:
    LOBYTE(v26) = 0;
    return v26 & 1;
  }
  targetVals = v30->fields.targetVals;
  if ( !targetVals )
    goto LABEL_26;
  v26 = *(_QWORD *)&targetVals->max_length;
  if ( v26 )
    return RestrictionEntity__IsRestriction_29671008(v30, individuality, 0LL);
  return v26 & 1;
}


bool __fastcall QuestRestrictionInfo__IsRestriction_31241596(
        QuestRestrictionInfo_o *this,
        bool *isWhole,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t lv,
        int32_t initPos,
        const MethodInfo *method)
{
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
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t ServantImageLimitSealAfter; // w24
  WebViewManager_o *v28; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x0
  ServantEntity_o *Entity; // x26
  WebViewManager_o *v31; // x0
  ServantLimitMaster_o *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *IsRestriction; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x21
  int v37; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  unsigned int v39; // w24
  bool v40; // vf
  int v41; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  __int64 v43; // x23
  bool v44; // w21
  QuestRestrictionInfo_SlotInfo_o *v45; // x8
  struct System_Collections_Generic_List_int____o *individualityList; // x28
  int size; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  struct QuestRestrictionInfo_SlotInfo_array *v49; // x8
  QuestRestrictionInfo_SlotInfo_o *v50; // x8
  struct System_Collections_Generic_List_Restriction_RangeType__o *rangeTypeList; // x28
  struct QuestRestrictionInfo_SlotInfo_array *v52; // x8
  QuestRestrictionInfo_SlotInfo_o *v53; // x8
  struct System_Collections_Generic_List_Restriction_RangeType__o *v54; // x28
  struct RestrictionEntity_array *restrictionEntityList; // x22
  int max_length; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x25
  unsigned int v58; // w23
  RestrictionEntity_o *v59; // x19
  int32_t type; // w8
  System_Int32_array *Individuality; // x0
  int32_t monitor; // w1
  RestrictionEntity_o *v63; // x0

  if ( (byte_40FD592 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, isWhole);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_int___, v18);
    sub_B16FFC(&Method_System_Linq_Enumerable_Intersect_int___, v19);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Count__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Item__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_40FD592 = 1;
  }
  *isWhole = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_70;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v28 )
    goto LABEL_70;
  v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v28,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v29 )
    goto LABEL_70;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v29,
                                svtId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v31 )
    goto LABEL_70;
  v32 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v31,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !v32 )
    goto LABEL_70;
  IsRestriction = (System_Collections_Generic_IEnumerable_TSource__o *)ServantLimitMaster__GetEntity(
                                                                         v32,
                                                                         svtId,
                                                                         limitCount,
                                                                         0LL);
  if ( !this->fields.restrictionBaseEntity )
  {
    restrictionEntityList = this->fields.restrictionEntityList;
    if ( !restrictionEntityList )
      goto LABEL_70;
    max_length = restrictionEntityList->max_length;
    if ( max_length < 1 )
      return 0;
    v57 = IsRestriction;
    v58 = 0;
    while ( 1 )
    {
      if ( v58 >= max_length )
        goto LABEL_71;
      v59 = restrictionEntityList->m_Items[v58];
      if ( !v59 )
        goto LABEL_70;
      type = v59->fields.type;
      if ( type == 4 )
        break;
      if ( type == 2 )
      {
        if ( !v57 )
          goto LABEL_70;
        monitor = (int32_t)v57[1].monitor;
        v63 = restrictionEntityList->m_Items[v58];
LABEL_64:
        IsRestriction = (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionEntity__IsRestriction(
                                                                               v63,
                                                                               monitor,
                                                                               0LL);
        if ( ((unsigned __int8)IsRestriction & 1) != 0 )
          return 1;
        goto LABEL_65;
      }
      if ( type == 1 )
      {
        if ( !Entity )
          goto LABEL_70;
        Individuality = ServantEntity__getIndividuality(Entity, limitCount, ServantImageLimitSealAfter, 0LL);
        IsRestriction = (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionEntity__IsRestriction_29671008(
                                                                               v59,
                                                                               Individuality,
                                                                               0LL);
        if ( ((unsigned __int8)IsRestriction & 1) != 0 )
          return 1;
      }
LABEL_65:
      max_length = restrictionEntityList->max_length;
      if ( (int)++v58 >= max_length )
        return 0;
    }
    v63 = restrictionEntityList->m_Items[v58];
    monitor = lv;
    goto LABEL_64;
  }
  if ( !Entity )
    goto LABEL_70;
  IsRestriction = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                         Entity,
                                                                         limitCount,
                                                                         ServantImageLimitSealAfter,
                                                                         0LL);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
    goto LABEL_70;
  v37 = restrictionWholeEntities->max_length;
  v38 = IsRestriction;
  if ( v37 < 1 )
  {
LABEL_19:
    v40 = __OFSUB__(initPos, 1);
    v41 = initPos - 1;
    if ( v41 < 0 == v40 )
    {
      slotInfos = this->fields.slotInfos;
      if ( slotInfos )
      {
        v43 = 0LL;
        v44 = 0;
        while ( v41 < slotInfos->max_length )
        {
          v45 = slotInfos->m_Items[v41];
          if ( !v45 )
            goto LABEL_70;
          individualityList = v45->fields.individualityList;
          if ( !individualityList )
            goto LABEL_70;
          size = individualityList->fields._size;
          if ( (int)v43 >= size )
            return v44;
          if ( size <= (unsigned int)v43 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          IsRestriction = (System_Collections_Generic_IEnumerable_TSource__o *)individualityList->fields._items->m_Items[v43];
          if ( !IsRestriction )
            goto LABEL_70;
          if ( IsRestriction[1].monitor )
          {
            v48 = System_Linq_Enumerable__Intersect_int_(
                    IsRestriction,
                    v38,
                    (const MethodInfo_18D894C *)Method_System_Linq_Enumerable_Intersect_int___);
            IsRestriction = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                                   v48,
                                                                                   (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
            v49 = this->fields.slotInfos;
            if ( !v49 )
              goto LABEL_70;
            if ( v41 >= v49->max_length )
              break;
            v50 = v49->m_Items[v41];
            if ( !v50 )
              goto LABEL_70;
            rangeTypeList = v50->fields.rangeTypeList;
            if ( !rangeTypeList )
              goto LABEL_70;
            if ( rangeTypeList->fields._size <= (unsigned int)v43 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            if ( rangeTypeList->fields._items->m_Items[v43 + 1] == 1 )
            {
              IsRestriction = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Any_int_(
                                                                                     IsRestriction,
                                                                                     (const MethodInfo_18C7BC4 *)Method_System_Linq_Enumerable_Any_int___);
              if ( ((unsigned __int8)IsRestriction & 1) != 0 )
                return 0;
            }
            else
            {
              v52 = this->fields.slotInfos;
              if ( !v52 )
                goto LABEL_70;
              if ( v41 >= v52->max_length )
                break;
              v53 = v52->m_Items[v41];
              if ( !v53 )
                goto LABEL_70;
              v54 = v53->fields.rangeTypeList;
              if ( !v54 )
                goto LABEL_70;
              if ( v54->fields._size <= (unsigned int)v43 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              if ( v54->fields._items->m_Items[v43 + 1] == 2 )
              {
                IsRestriction = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Any_int_(
                                                                                       IsRestriction,
                                                                                       (const MethodInfo_18C7BC4 *)Method_System_Linq_Enumerable_Any_int___);
                if ( ((unsigned __int8)IsRestriction & 1) == 0 )
                  return 0;
              }
            }
            v44 = 1;
          }
          slotInfos = this->fields.slotInfos;
          ++v43;
          if ( !slotInfos )
            goto LABEL_70;
        }
LABEL_71:
        sub_B17100(IsRestriction, v34, v35);
        sub_B170A0();
      }
LABEL_70:
      sub_B170D4();
    }
    return 0;
  }
  v39 = 0;
  while ( 1 )
  {
    if ( v39 >= v37 )
      goto LABEL_71;
    IsRestriction = (System_Collections_Generic_IEnumerable_TSource__o *)restrictionWholeEntities->m_Items[v39];
    if ( !IsRestriction )
      goto LABEL_70;
    if ( LODWORD(IsRestriction[2].klass) == 1 )
    {
      IsRestriction = (System_Collections_Generic_IEnumerable_TSource__o *)RestrictionWholeEntity__IsIndividuality(
                                                                             (RestrictionWholeEntity_o *)IsRestriction,
                                                                             (System_Int32_array *)v38,
                                                                             0LL);
      if ( ((unsigned __int8)IsRestriction & 1) == 0 )
        break;
    }
    v37 = restrictionWholeEntities->max_length;
    if ( (int)++v39 >= v37 )
      goto LABEL_19;
  }
  v44 = 1;
  *isWhole = 1;
  return v44;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsSelectableNormalSupport(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  QuestRestrictionInfo___c__DisplayClass168_0_o *v11; // x21
  const MethodInfo *v12; // x2
  _BOOL8 IsMyServantOrNpcRestriction_31258540; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v19; // w9
  QuestRestrictionInfo_SlotInfo_o *v20; // x8
  bool v21; // zf
  peRenderTexture_ChangeLayerObject_o *v22; // x0
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v24; // x20

  if ( (byte_40FD5B3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__Find__, *(_QWORD *)&pos);
    sub_B16FFC(&Method_System_Predicate_RestrictionEntity___ctor__, v7);
    sub_B16FFC(&System_Predicate_RestrictionEntity__TypeInfo, v8);
    sub_B16FFC(&Method_QuestRestrictionInfo___c__DisplayClass168_0__IsSelectableNormalSupport_b__0__, v9);
    sub_B16FFC(&QuestRestrictionInfo___c__DisplayClass168_0_TypeInfo, v10);
    byte_40FD5B3 = 1;
  }
  v11 = (QuestRestrictionInfo___c__DisplayClass168_0_o *)sub_B170CC(
                                                           QuestRestrictionInfo___c__DisplayClass168_0_TypeInfo,
                                                           *(_QWORD *)&pos,
                                                           method,
                                                           v3,
                                                           v4);
  QuestRestrictionInfo___c__DisplayClass168_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_18;
  v11->fields.pos = pos;
  IsMyServantOrNpcRestriction_31258540 = QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(this, pos, v12);
  if ( !IsMyServantOrNpcRestriction_31258540 )
  {
    LOBYTE(v22) = 0;
    return (char)v22;
  }
  if ( !this->fields.restrictionBaseEntity )
  {
    myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
    v24 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                     System_Predicate_RestrictionEntity__TypeInfo,
                                                                     v14,
                                                                     v15,
                                                                     v16,
                                                                     v17);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v24,
      (Il2CppObject *)v11,
      Method_QuestRestrictionInfo___c__DisplayClass168_0__IsSelectableNormalSupport_b__0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_RestrictionEntity___ctor__);
    if ( myServantOrNpcRestrictionEntityList )
    {
      v22 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)myServantOrNpcRestrictionEntityList,
              (System_Predicate_T__o *)v24,
              (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_RestrictionEntity__Find__);
      if ( !v22 )
        return (char)v22;
      v21 = LODWORD(v22->fields.orgMaterial) == 16;
      goto LABEL_14;
    }
LABEL_18:
    sub_B170D4();
  }
  slotInfos = this->fields.slotInfos;
  if ( !slotInfos )
    goto LABEL_18;
  v19 = v11->fields.pos - 1;
  if ( v19 >= slotInfos->max_length )
  {
    sub_B17100(IsMyServantOrNpcRestriction_31258540, v14, v15);
    sub_B170A0();
  }
  v20 = slotInfos->m_Items[v19];
  if ( !v20 )
    goto LABEL_18;
  v21 = v20->fields.slotType == 4;
LABEL_14:
  LOBYTE(v22) = v21;
  return (char)v22;
}


bool __fastcall QuestRestrictionInfo__IsServantNum(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.servantNumMax > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsServantNumAndFixedServantPositionRestriction(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t servantNumMax; // w8
  BalanceConfig_c *v9; // x0
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x9
  const MethodInfo *v11; // x1
  __int64 v12; // x2
  System_Int32_array *FixedServantPositionSvtIdList; // x0
  int max_length; // w8
  unsigned int v15; // w9
  struct RestrictionEntity_o *fixedServantPositionRestrictionEntity; // x8
  struct System_Int32_array *targetVals; // x8
  int v18; // w9
  unsigned int v19; // w10

  if ( (byte_40FD5AE & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__get_Count__, v7);
    byte_40FD5AE = 1;
  }
  if ( !this->fields.isFixedMyServantPosition && !this->fields.isNeedStarting && !this->fields.isFixedPosition )
    goto LABEL_23;
  servantNumMax = this->fields.servantNumMax;
  if ( servantNumMax <= 0 && !this->fields.isMyServantOrNpc && !this->fields.isMyServantOrSupport )
    goto LABEL_23;
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
    servantNumMax = this->fields.servantNumMax;
  }
  if ( servantNumMax < 1 )
  {
    servantNumMax = v9->static_fields->DeckMemberMax;
  }
  else if ( this->fields.myServantNumMax > 0 )
  {
    servantNumMax = this->fields.myServantNumMax;
  }
  if ( this->fields.isMyServantOrNpc || this->fields.isMyServantOrSupport )
  {
    myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
    if ( !myServantOrNpcRestrictionEntityList )
      goto LABEL_42;
    servantNumMax -= myServantOrNpcRestrictionEntityList->fields._size;
  }
  if ( servantNumMax == 1
    && !QuestRestrictionInfo__IsMyServantOrNpcRestriction_31258540(this, pos, *(const MethodInfo **)&pos) )
  {
    if ( this->fields.isFixedMyServantPosition )
    {
      FixedServantPositionSvtIdList = QuestRestrictionInfo__GetFixedServantPositionSvtIdList(this, v11);
      if ( FixedServantPositionSvtIdList )
      {
        max_length = FixedServantPositionSvtIdList->max_length;
        if ( max_length >= 1 )
        {
          v15 = 0;
          while ( v15 < max_length )
          {
            if ( FixedServantPositionSvtIdList->m_Items[v15 + 1] == svtId )
              goto LABEL_23;
            if ( (int)++v15 >= max_length )
              goto LABEL_40;
          }
          goto LABEL_41;
        }
        goto LABEL_40;
      }
    }
    else
    {
      fixedServantPositionRestrictionEntity = this->fields.fixedServantPositionRestrictionEntity;
      if ( !fixedServantPositionRestrictionEntity )
        goto LABEL_40;
      targetVals = fixedServantPositionRestrictionEntity->fields.targetVals;
      if ( targetVals )
      {
        v18 = targetVals->max_length;
        if ( v18 >= 1 )
        {
          v19 = 0;
          FixedServantPositionSvtIdList = (System_Int32_array *)(&dword_0 + 1);
          while ( v19 < v18 )
          {
            if ( targetVals->m_Items[v19 + 1] == svtId )
              goto LABEL_23;
            if ( (int)++v19 >= v18 )
              return (char)FixedServantPositionSvtIdList;
          }
LABEL_41:
          sub_B17100(FixedServantPositionSvtIdList, v11, v12);
          sub_B170A0();
        }
LABEL_40:
        LOBYTE(FixedServantPositionSvtIdList) = 1;
        return (char)FixedServantPositionSvtIdList;
      }
    }
LABEL_42:
    sub_B170D4();
  }
LABEL_23:
  LOBYTE(FixedServantPositionSvtIdList) = 0;
  return (char)FixedServantPositionSvtIdList;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsSetRequired(
        QuestRestrictionInfo_o *this,
        int32_t pos,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v6; // x20
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  QuestRestrictionInfo_SlotInfo_o *v8; // x8
  int servantNumMax; // w22
  BalanceConfig_c *v11; // x0
  int32_t DeckMainMemberMax; // w8

  v6 = this;
  if ( (byte_40FD5C2 & 1) == 0 )
  {
    this = (QuestRestrictionInfo_o *)sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&pos);
    byte_40FD5C2 = 1;
  }
  if ( !v6->fields.restrictionBaseEntity )
    return pos == 1 && v6->fields.isFixedMyServantSingle;
  slotInfos = v6->fields.slotInfos;
  if ( slotInfos )
  {
    if ( initPos - 1 >= slotInfos->max_length )
    {
      sub_B17100(this, *(_QWORD *)&pos, *(_QWORD *)&initPos);
      sub_B170A0();
    }
    v8 = slotInfos->m_Items[initPos - 1];
    if ( !v8 )
      sub_B170D4();
    if ( v8->fields.isRequired )
      return 1;
  }
  servantNumMax = v6->fields.servantNumMax;
  if ( servantNumMax < 1 || v6->fields.servantNumMin > 0 )
    return 0;
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  DeckMainMemberMax = v11->static_fields->DeckMainMemberMax;
  if ( servantNumMax <= DeckMainMemberMax )
  {
    DeckMainMemberMax = v6->fields.servantNumMax;
  }
  else if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    DeckMainMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
  }
  return DeckMainMemberMax >= pos;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsSlotRestrictionForSupport(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x0
  System_Int32_array *Individuality; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x21
  int max_length; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  unsigned int v26; // w22
  bool v27; // w20
  QuestRestrictionInfo_SlotInfo_o *v28; // x26
  struct System_Collections_Generic_List_int____o *individualityList; // x28
  __int64 v30; // x27
  int size; // w8
  System_Int32_array *v32; // x8
  struct System_Collections_Generic_List_int____o *v33; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  struct System_Collections_Generic_List_Restriction_RangeType__o *rangeTypeList; // x28
  struct System_Collections_Generic_List_Restriction_RangeType__o *v36; // x28

  if ( (byte_40FD5CB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_int___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Intersect_int___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____get_Item__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FD5CB = 1;
  }
  if ( this->fields.restrictionBaseEntity )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_41;
    Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  svtId,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Entity )
      goto LABEL_41;
    Individuality = ServantEntity__getIndividuality(Entity, limitCount, dispLimitCount, 0LL);
    slotInfos = this->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_41;
    max_length = slotInfos->max_length;
    if ( max_length >= 1 )
    {
      v25 = (System_Collections_Generic_IEnumerable_TSource__o *)Individuality;
      v26 = 0;
      v27 = 0;
      while ( 1 )
      {
        if ( v26 >= max_length )
        {
          sub_B17100(Individuality, v21, v22);
          sub_B170A0();
        }
        v28 = slotInfos->m_Items[v26];
        if ( !v28 )
          break;
        if ( v28->fields.slotType == 2 )
        {
          individualityList = v28->fields.individualityList;
          if ( !individualityList )
            break;
          v30 = 0LL;
          while ( 1 )
          {
            size = individualityList->fields._size;
            if ( (int)v30 >= size )
              break;
            if ( size <= (unsigned int)v30 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v32 = individualityList->fields._items->m_Items[v30];
            if ( !v32 )
              goto LABEL_41;
            if ( *(_QWORD *)&v32->max_length )
            {
              v33 = v28->fields.individualityList;
              if ( !v33 )
                goto LABEL_41;
              if ( v33->fields._size <= (unsigned int)v30 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v34 = System_Linq_Enumerable__Intersect_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v33->fields._items->m_Items[v30],
                      v25,
                      (const MethodInfo_18D894C *)Method_System_Linq_Enumerable_Intersect_int___);
              Individuality = System_Linq_Enumerable__ToArray_int_(
                                v34,
                                (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
              rangeTypeList = v28->fields.rangeTypeList;
              if ( !rangeTypeList )
                goto LABEL_41;
              if ( rangeTypeList->fields._size <= (unsigned int)v30 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              if ( rangeTypeList->fields._items->m_Items[v30 + 1] == 1 )
              {
                Individuality = (System_Int32_array *)System_Linq_Enumerable__Any_int_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)Individuality,
                                                        (const MethodInfo_18C7BC4 *)Method_System_Linq_Enumerable_Any_int___);
                if ( ((unsigned __int8)Individuality & 1) != 0 )
                  return 0;
              }
              else
              {
                v36 = v28->fields.rangeTypeList;
                if ( !v36 )
                  goto LABEL_41;
                if ( v36->fields._size <= (unsigned int)v30 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                if ( v36->fields._items->m_Items[v30 + 1] == 2 )
                {
                  Individuality = (System_Int32_array *)System_Linq_Enumerable__Any_int_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)Individuality,
                                                          (const MethodInfo_18C7BC4 *)Method_System_Linq_Enumerable_Any_int___);
                  if ( ((unsigned __int8)Individuality & 1) == 0 )
                    return 0;
                }
              }
              v27 = 1;
            }
            individualityList = v28->fields.individualityList;
            ++v30;
            if ( !individualityList )
              goto LABEL_41;
          }
        }
        max_length = slotInfos->max_length;
        if ( (int)++v26 >= max_length )
          return v27;
      }
LABEL_41:
      sub_B170D4();
    }
  }
  return 0;
}


bool __fastcall QuestRestrictionInfo__IsSupportOnly(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.supportOnlyRestrictionEntity != 0LL;
}


bool __fastcall QuestRestrictionInfo__IsSupportOnlyForceBattle(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isSupportOnlyForceBattle;
}


bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isUniqueIndividuality;
}


bool __fastcall QuestRestrictionInfo__IsUniqueIndividualityServant(
        QuestRestrictionInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct RestrictionWholeEntity_array *restrictionWholeEntities; // x20
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x19
  unsigned int v11; // w21
  RestrictionWholeEntity_o *v12; // x8
  struct System_Int32_array *targetVals; // x23
  __int64 v14; // x8
  unsigned __int64 v15; // x24
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FD5CA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v4);
    byte_40FD5CA = 1;
  }
  entity = 0LL;
  if ( !this->fields.restrictionBaseEntity )
    return 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  restrictionWholeEntities = this->fields.restrictionWholeEntities;
  if ( !restrictionWholeEntities )
LABEL_23:
    sub_B170D4();
  max_length = restrictionWholeEntities->max_length;
  if ( max_length < 1 )
    return 1;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= max_length )
    {
LABEL_24:
      sub_B17100(Master_WarQuestSelectionMaster, v6, v7);
      sub_B170A0();
    }
    v12 = restrictionWholeEntities->m_Items[v11];
    if ( !v12 )
      goto LABEL_23;
    if ( v12->fields.type == 9 )
    {
      targetVals = v12->fields.targetVals;
      if ( !targetVals )
        goto LABEL_23;
      v14 = *(_QWORD *)&targetVals->max_length;
      if ( (int)v14 >= 1 )
        break;
    }
LABEL_20:
    max_length = restrictionWholeEntities->max_length;
    if ( (int)++v11 >= max_length )
      return 1;
  }
  v15 = 0LL;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)v14 )
      goto LABEL_24;
    if ( !v10 )
      goto LABEL_23;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    v10,
                                                                    &entity,
                                                                    targetVals->m_Items[v15 + 1],
                                                                    (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
      return 0;
    LODWORD(v14) = targetVals->max_length;
    if ( (__int64)++v15 >= (int)v14 )
      goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_31244328(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x22
  ServantEntity_o *Entity; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Int32_array *uniqueIndividualitys; // x26
  __int64 v22; // x8
  ServantEntity_o *v23; // x23
  unsigned __int64 v24; // x27
  int32_t v25; // w24
  __int64 i; // x21
  struct System_Int32_array *deckSvtIdList; // x8
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x9
  unsigned __int64 v30; // x19
  int32_t v32; // [xsp+8h] [xbp-58h]
  int32_t ServantImageLimitSealAfter; // [xsp+Ch] [xbp-54h]

  if ( (byte_40FD598 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FD598 = 1;
  }
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    goto LABEL_35;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_37;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (v17 = Master_WarQuestSelectionMaster,
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      Master_WarQuestSelectionMaster,
                                      svtId,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_37:
    sub_B170D4();
  }
  v22 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v22 >= 1 )
  {
    v32 = limitCount;
    v23 = Entity;
    v24 = 0LL;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)v22 )
      {
LABEL_38:
        sub_B17100(Entity, v19, v20);
        sub_B170A0();
      }
      if ( !v23 )
        goto LABEL_37;
      v25 = uniqueIndividualitys->m_Items[v24 + 1];
      if ( ServantEntity__IsIndividuality(v23, v32, ServantImageLimitSealAfter, v25, 0LL) )
        break;
LABEL_33:
      LODWORD(v22) = uniqueIndividualitys->max_length;
      ++v24;
      Entity = 0LL;
      if ( (__int64)v24 >= (int)v22 )
        return (char)Entity;
    }
    for ( i = 8LL; ; ++i )
    {
      Entity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      v30 = i - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Entity = (ServantEntity_o *)BalanceConfig_TypeInfo;
      }
      if ( (__int64)v30 >= *(int *)(*(_QWORD *)&Entity->fields.starRate + 156LL) )
        goto LABEL_33;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_37;
      if ( v30 >= deckSvtIdList->max_length )
        goto LABEL_38;
      v19 = *((unsigned int *)&deckSvtIdList->obj.klass + i);
      if ( (int)v19 >= 1 )
      {
        Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v17,
                                      v19,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        deckLimitCountList = this->fields.deckLimitCountList;
        if ( !deckLimitCountList )
          goto LABEL_37;
        if ( v30 >= deckLimitCountList->max_length )
          goto LABEL_38;
        deckDispLimitCountList = this->fields.deckDispLimitCountList;
        if ( !deckDispLimitCountList )
          goto LABEL_37;
        if ( v30 >= deckDispLimitCountList->max_length )
          goto LABEL_38;
        if ( !Entity )
          goto LABEL_37;
        if ( ServantEntity__IsIndividuality(
               Entity,
               *((_DWORD *)&deckLimitCountList->obj.klass + i),
               *((_DWORD *)&deckDispLimitCountList->obj.klass + i),
               v25,
               0LL) )
        {
          break;
        }
      }
    }
    LOBYTE(Entity) = 1;
  }
  else
  {
LABEL_35:
    LOBYTE(Entity) = 0;
  }
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueIndividuality_31244976(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x24
  ServantEntity_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  struct System_Int32_array *uniqueIndividualitys; // x9
  __int64 v28; // x8
  unsigned __int64 v29; // x25
  int32_t v30; // w26
  int32_t i; // w27
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v33; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // kr00_16
  int32_t v35; // w0
  ServantEntity_o *v36; // x23
  int32_t svtLimitCount; // w22
  int32_t DispImageLimitCount; // w0
  BalanceConfig_c *v39; // x0
  ServantEntity_o *v41; // [xsp+8h] [xbp-78h]
  struct System_Int32_array *v42; // [xsp+10h] [xbp-70h]
  int32_t ServantImageLimitSealAfter; // [xsp+1Ch] [xbp-64h]
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40FD599 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v14);
    sub_B16FFC(&DataManager_TypeInfo, v15);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40FD599 = 1;
  }
  entity = 0LL;
  if ( svtId < 1 || !this->fields.isUniqueIndividuality || !this->fields.uniqueIndividualitys )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 MasterData_WarQuestSelectionMaster,
                                 svtId,
                                 dispLimitCount,
                                 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (v23 = Master_WarQuestSelectionMaster,
        v24 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   Master_WarQuestSelectionMaster,
                                   svtId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (uniqueIndividualitys = this->fields.uniqueIndividualitys) == 0LL) )
  {
LABEL_38:
    sub_B170D4();
  }
  v28 = *(_QWORD *)&uniqueIndividualitys->max_length;
  if ( (int)v28 < 1 )
    return 0;
  v29 = 0LL;
  v41 = v24;
  v42 = uniqueIndividualitys;
  while ( 1 )
  {
    if ( v29 >= (unsigned int)v28 )
    {
      sub_B17100(v24, v25, v26);
      sub_B170A0();
    }
    if ( !v24 )
      goto LABEL_38;
    v30 = uniqueIndividualitys->m_Items[v29 + 1];
    if ( ServantEntity__IsIndividuality(v24, limitCount, ServantImageLimitSealAfter, v30, 0LL) )
      break;
LABEL_34:
    v24 = v41;
    uniqueIndividualitys = v42;
    ++v29;
    LODWORD(v28) = v42->max_length;
    if ( (__int64)v29 >= (int)v28 )
      return 0;
  }
  for ( i = 0; ; ++i )
  {
    v39 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    if ( i >= v39->static_fields->DeckMemberMax )
      goto LABEL_34;
    if ( num != i && partyIndex != i )
    {
      if ( !partyItem )
        goto LABEL_38;
      Member = PartyListViewItem__GetMember(partyItem, i, 0LL);
      if ( !Member )
        goto LABEL_38;
      v33 = Member;
      v34 = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v34, 0LL);
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             v23,
             &entity,
             v35,
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
      {
        v36 = (ServantEntity_o *)entity;
        svtLimitCount = v33->fields.svtLimitCount;
        DispImageLimitCount = PartyOrganizationListViewItem__GetDispImageLimitCount(v33, 0LL);
        if ( !v36 )
          goto LABEL_38;
        if ( ServantEntity__IsIndividuality(v36, svtLimitCount, DispImageLimitCount, v30, 0LL) )
          break;
      }
    }
  }
  return 1;
}


bool __fastcall QuestRestrictionInfo__IsUniqueServant(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.isUniqueServant;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueServant_31243756(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  bool result; // w0
  il2cpp_array_size_t v6; // w22
  BalanceConfig_c *v7; // x0
  struct System_Int32_array *deckSvtIdList; // x8
  int32_t v9; // w8

  if ( (byte_40FD596 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    byte_40FD596 = 1;
  }
  if ( !this->fields.isUniqueServant )
    return 0;
  result = 0;
  if ( svtId >= 1 && this->fields.deckSvtIdList )
  {
    v6 = 0;
    v7 = BalanceConfig_TypeInfo;
    while ( 1 )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BalanceConfig_TypeInfo;
      }
      if ( (signed int)v6 >= v7->static_fields->DeckMemberMax )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        sub_B170D4();
      if ( v6 >= deckSvtIdList->max_length )
      {
        sub_B17100(v7, *(_QWORD *)&svtId, method);
        sub_B170A0();
      }
      v9 = deckSvtIdList->m_Items[++v6];
      if ( v9 == svtId )
        return 1;
    }
    return 0;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionInfo__IsUniqueServant_31243980(
        QuestRestrictionInfo_o *this,
        int32_t svtId,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t partyIndex,
        const MethodInfo *method)
{
  __int64 v11; // x1
  bool result; // w0
  int32_t i; // w23
  PartyOrganizationListViewItem_o *Member; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // kr00_16
  BalanceConfig_c *v16; // x0

  if ( (byte_40FD597 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_40FD597 = 1;
  }
  if ( !this->fields.isUniqueServant )
    return 0;
  result = 0;
  if ( svtId >= 1 && this->fields.deckSvtIdList )
  {
    for ( i = 0; ; ++i )
    {
      v16 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v16 = BalanceConfig_TypeInfo;
      }
      if ( i >= v16->static_fields->DeckMemberMax )
        break;
      if ( num != i && partyIndex != i )
      {
        if ( !partyItem || (Member = PartyListViewItem__GetMember(partyItem, i, 0LL)) == 0LL )
          sub_B170D4();
        v15 = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL) == svtId )
          return 1;
      }
    }
    return 0;
  }
  return result;
}


bool __fastcall QuestRestrictionInfo__IsUseEventDeck(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.eventDeckNum > 0;
}


bool __fastcall QuestRestrictionInfo__IsUseOldMaster(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  return this->fields.restrictionBaseEntity == 0LL;
}


void __fastcall QuestRestrictionInfo__ResetDeckInfo(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct System_Int32_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FD58D & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v4);
    byte_40FD58D = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)v5->static_fields->DeckMemberMax, v2);
  this->fields.deckSvtIdList = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.deckSvtIdList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void __fastcall QuestRestrictionInfo__SetDeckInfo(
        QuestRestrictionInfo_o *this,
        UserDeckEntity_o *userDeckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x24
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x26
  struct System_Int32_array *deckSvtIdList; // x8
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v12; // x21
  struct System_Int32_array *v13; // x27
  __int64 v14; // x22
  __int64 v15; // x23
  BalanceConfig_c *DispLimitCount; // x0
  struct System_Int32_array *deckLimitCountList; // x27
  __int64 v18; // x22
  __int64 v19; // x23
  struct System_Int32_array *deckDispLimitCountList; // x22
  unsigned __int64 v21; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_40FD58A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userDeckEntity);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40FD58A = 1;
  }
  if ( userDeckEntity && this->fields.deckSvtIdList )
  {
    v6 = 8LL;
    v9 = 1LL - (unsigned int)UserDeckEntity__GetFollowerIndex(userDeckEntity, 0LL);
    while ( 1 )
    {
      DispLimitCount = BalanceConfig_TypeInfo;
      v21 = v6 - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        DispLimitCount = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v21 >= DispLimitCount->static_fields->DeckMemberMax )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_31;
      if ( v21 >= deckSvtIdList->max_length )
        goto LABEL_30;
      *((_DWORD *)&deckSvtIdList->obj.klass + v6) = 0;
      if ( v9 + v6 != 8 )
      {
        UserServant = UserDeckEntity__GetUserServant(userDeckEntity, (int)v6 - 8, 0LL);
        if ( UserServant )
        {
          v12 = UserServant;
          v13 = this->fields.deckSvtIdList;
          v15 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v14 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v22.fields.currentCryptoKey = v15;
          *(_QWORD *)&v22.fields.fakeValue = v14;
          DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                v22,
                                                0LL);
          if ( !v13 )
LABEL_31:
            sub_B170D4();
          if ( v21 >= v13->max_length )
          {
LABEL_30:
            sub_B17100(DispLimitCount, v7, v8);
            sub_B170A0();
          }
          *((_DWORD *)&v13->obj.klass + v6) = (_DWORD)DispLimitCount;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v19 = *(_QWORD *)&v12->fields.limitCount.fields.currentCryptoKey;
            v18 = *(_QWORD *)&v12->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v23.fields.currentCryptoKey = v19;
            *(_QWORD *)&v23.fields.fakeValue = v18;
            DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                  v23,
                                                  0LL);
            if ( v21 >= deckLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            DispLimitCount = (BalanceConfig_c *)UserServantEntity__getDispLimitCount(v12, 0, 0LL);
            if ( v21 >= deckDispLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckDispLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
        }
      }
      ++v6;
    }
  }
}


void __fastcall QuestRestrictionInfo__SetDeckInfo_31237772(
        QuestRestrictionInfo_o *this,
        UserEventDeckEntity_o *eventDeckEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x24
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x26
  struct System_Int32_array *deckSvtIdList; // x8
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v12; // x21
  struct System_Int32_array *v13; // x27
  __int64 v14; // x22
  __int64 v15; // x23
  BalanceConfig_c *DispLimitCount; // x0
  struct System_Int32_array *deckLimitCountList; // x27
  __int64 v18; // x22
  __int64 v19; // x23
  struct System_Int32_array *deckDispLimitCountList; // x22
  unsigned __int64 v21; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_40FD58B & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, eventDeckEntity);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40FD58B = 1;
  }
  if ( eventDeckEntity && this->fields.deckSvtIdList )
  {
    v6 = 8LL;
    v9 = 1LL - (unsigned int)UserEventDeckEntity__GetFollowerIndex(eventDeckEntity, 0LL);
    while ( 1 )
    {
      DispLimitCount = BalanceConfig_TypeInfo;
      v21 = v6 - 8;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        DispLimitCount = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v21 >= DispLimitCount->static_fields->DeckMemberMax )
        break;
      deckSvtIdList = this->fields.deckSvtIdList;
      if ( !deckSvtIdList )
        goto LABEL_31;
      if ( v21 >= deckSvtIdList->max_length )
        goto LABEL_30;
      *((_DWORD *)&deckSvtIdList->obj.klass + v6) = 0;
      if ( v9 + v6 != 8 )
      {
        UserServant = UserEventDeckEntity__GetUserServant(eventDeckEntity, (int)v6 - 8, 0LL);
        if ( UserServant )
        {
          v12 = UserServant;
          v13 = this->fields.deckSvtIdList;
          v15 = *(_QWORD *)&UserServant->fields.svtId.fields.currentCryptoKey;
          v14 = *(_QWORD *)&UserServant->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v22.fields.currentCryptoKey = v15;
          *(_QWORD *)&v22.fields.fakeValue = v14;
          DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                v22,
                                                0LL);
          if ( !v13 )
LABEL_31:
            sub_B170D4();
          if ( v21 >= v13->max_length )
          {
LABEL_30:
            sub_B17100(DispLimitCount, v7, v8);
            sub_B170A0();
          }
          *((_DWORD *)&v13->obj.klass + v6) = (_DWORD)DispLimitCount;
          deckLimitCountList = this->fields.deckLimitCountList;
          if ( deckLimitCountList )
          {
            v19 = *(_QWORD *)&v12->fields.limitCount.fields.currentCryptoKey;
            v18 = *(_QWORD *)&v12->fields.limitCount.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v23.fields.currentCryptoKey = v19;
            *(_QWORD *)&v23.fields.fakeValue = v18;
            DispLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                  v23,
                                                  0LL);
            if ( v21 >= deckLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
          deckDispLimitCountList = this->fields.deckDispLimitCountList;
          if ( deckDispLimitCountList )
          {
            DispLimitCount = (BalanceConfig_c *)UserServantEntity__getDispLimitCount(v12, 0, 0LL);
            if ( v21 >= deckDispLimitCountList->max_length )
              goto LABEL_30;
            *((_DWORD *)&deckDispLimitCountList->obj.klass + v6) = (_DWORD)DispLimitCount;
          }
        }
      }
      ++v6;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo__SetDeckInfo_31238248(
        QuestRestrictionInfo_o *this,
        PartyListViewItem_o *partyItem,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x1
  unsigned __int64 v8; // x21
  unsigned __int64 v9; // x25
  struct System_Int32_array *v10; // x8
  BalanceConfig_c *DispImageLimitCount; // x0
  char *v12; // x8
  PartyOrganizationListViewItem_o *Member; // x0
  struct System_Int32_array *deckSvtIdList; // x28
  PartyOrganizationListViewItem_o *v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *deckLimitCountList; // x8
  struct System_Int32_array *deckDispLimitCountList; // x23

  if ( (byte_40FD58C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, partyItem);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_40FD58C = 1;
  }
  if ( this->fields.deckSvtIdList )
  {
    v8 = 0LL;
    v9 = (unsigned int)num;
    while ( 1 )
    {
      DispImageLimitCount = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        DispImageLimitCount = BalanceConfig_TypeInfo;
      }
      if ( (__int64)v8 >= DispImageLimitCount->static_fields->DeckMemberMax )
        return;
      if ( v8 == v9 )
        break;
      if ( !partyItem )
        goto LABEL_29;
      Member = PartyListViewItem__GetMember(partyItem, v8, 0LL);
      if ( !Member )
        goto LABEL_29;
      deckSvtIdList = this->fields.deckSvtIdList;
      v15 = Member;
      SvtId = PartyOrganizationListViewItem__get_SvtId(Member, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      DispImageLimitCount = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                 SvtId,
                                                 0LL);
      if ( !deckSvtIdList )
LABEL_29:
        sub_B170D4();
      if ( v8 >= deckSvtIdList->max_length )
      {
LABEL_30:
        sub_B17100(DispImageLimitCount, partyItem, *(_QWORD *)&num);
        sub_B170A0();
      }
      deckSvtIdList->m_Items[v8 + 1] = (int)DispImageLimitCount;
      deckLimitCountList = this->fields.deckLimitCountList;
      if ( deckLimitCountList )
      {
        if ( v8 >= deckLimitCountList->max_length )
          goto LABEL_30;
        deckLimitCountList->m_Items[v8 + 1] = v15->fields.svtLimitCount;
      }
      deckDispLimitCountList = this->fields.deckDispLimitCountList;
      if ( deckDispLimitCountList )
      {
        DispImageLimitCount = (BalanceConfig_c *)PartyOrganizationListViewItem__GetDispImageLimitCount(v15, 0LL);
        if ( v8 >= deckDispLimitCountList->max_length )
          goto LABEL_30;
        v12 = (char *)deckDispLimitCountList + 4 * v8;
LABEL_22:
        *((_DWORD *)v12 + 8) = (_DWORD)DispImageLimitCount;
      }
      ++v8;
    }
    v10 = this->fields.deckSvtIdList;
    if ( !v10 )
      goto LABEL_29;
    if ( v10->max_length <= v9 )
      goto LABEL_30;
    LODWORD(DispImageLimitCount) = 0;
    v12 = (char *)v10 + 4 * v9;
    goto LABEL_22;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestRestrictionInfo__Setup(
        QuestRestrictionInfo_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  struct System_String_o *v79; // x20
  System_Int32_array **v80; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  BattleServantConfConponent_o *p_supportPositionList; // x22
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  __int64 v142; // x1
  __int64 v143; // x2
  __int64 v144; // x3
  __int64 v145; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v146; // x20
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  __int64 v153; // x1
  __int64 v154; // x2
  __int64 v155; // x3
  __int64 v156; // x4
  System_Collections_Generic_List_int__o *v157; // x20
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  __int64 v188; // x1
  __int64 v189; // x2
  __int64 v190; // x3
  __int64 v191; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v192; // x20
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  __int64 v199; // x1
  __int64 v200; // x2
  __int64 v201; // x3
  __int64 v202; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v203; // x20
  System_String_array **v204; // x2
  System_String_array **v205; // x3
  System_Boolean_array **v206; // x4
  System_Int32_array **v207; // x5
  System_Int32_array *v208; // x6
  System_Int32_array *v209; // x7
  __int64 v210; // x1
  __int64 v211; // x2
  __int64 v212; // x3
  __int64 v213; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v214; // x20
  System_String_array **v215; // x2
  System_String_array **v216; // x3
  System_Boolean_array **v217; // x4
  System_Int32_array **v218; // x5
  System_Int32_array *v219; // x6
  System_Int32_array *v220; // x7
  __int64 v221; // x1
  __int64 v222; // x2
  __int64 v223; // x3
  __int64 v224; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v225; // x20
  System_String_array **v226; // x2
  System_String_array **v227; // x3
  System_Boolean_array **v228; // x4
  System_Int32_array **v229; // x5
  System_Int32_array *v230; // x6
  System_Int32_array *v231; // x7
  __int64 v232; // x1
  __int64 v233; // x2
  __int64 v234; // x3
  __int64 v235; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v236; // x20
  System_String_array **v237; // x2
  System_String_array **v238; // x3
  System_Boolean_array **v239; // x4
  System_Int32_array **v240; // x5
  System_Int32_array *v241; // x6
  System_Int32_array *v242; // x7
  __int64 v243; // x1
  __int64 v244; // x2
  __int64 v245; // x3
  __int64 v246; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v247; // x20
  System_String_array **v248; // x2
  System_String_array **v249; // x3
  System_Boolean_array **v250; // x4
  System_Int32_array **v251; // x5
  System_Int32_array *v252; // x6
  System_Int32_array *v253; // x7
  System_String_array **v254; // x2
  System_String_array **v255; // x3
  System_Boolean_array **v256; // x4
  System_Int32_array **v257; // x5
  System_Int32_array *v258; // x6
  System_Int32_array *v259; // x7
  __int64 v260; // x1
  __int64 v261; // x2
  __int64 v262; // x3
  __int64 v263; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v264; // x20
  System_String_array **v265; // x2
  System_String_array **v266; // x3
  System_Boolean_array **v267; // x4
  System_Int32_array **v268; // x5
  System_Int32_array *v269; // x6
  System_Int32_array *v270; // x7
  BattleServantConfConponent_o *p_fields; // x25
  System_String_array **v272; // x2
  System_String_array **v273; // x3
  System_Boolean_array **v274; // x4
  System_Int32_array **v275; // x5
  System_Int32_array *v276; // x6
  System_Int32_array *v277; // x7
  System_String_array **v278; // x2
  System_String_array **v279; // x3
  System_Boolean_array **v280; // x4
  System_Int32_array **v281; // x5
  System_Int32_array *v282; // x6
  System_Int32_array *v283; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v285; // x1
  __int64 v286; // x2
  __int64 v287; // x3
  __int64 v288; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v289; // x20
  System_String_array **v290; // x2
  System_String_array **v291; // x3
  System_Boolean_array **v292; // x4
  System_Int32_array **v293; // x5
  System_Int32_array *v294; // x6
  System_Int32_array *v295; // x7
  __int64 v296; // x1
  __int64 v297; // x2
  __int64 v298; // x3
  __int64 v299; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v300; // x20
  System_String_array **v301; // x2
  System_String_array **v302; // x3
  System_Boolean_array **v303; // x4
  System_Int32_array **v304; // x5
  System_Int32_array *v305; // x6
  System_Int32_array *v306; // x7
  __int64 v307; // x1
  __int64 v308; // x2
  __int64 v309; // x3
  __int64 v310; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v311; // x20
  System_String_array **v312; // x2
  System_String_array **v313; // x3
  System_Boolean_array **v314; // x4
  System_Int32_array **v315; // x5
  System_Int32_array *v316; // x6
  System_Int32_array *v317; // x7
  __int64 v318; // x1
  __int64 v319; // x2
  __int64 v320; // x3
  __int64 v321; // x4
  RestrictionBaseEntity_o *restrictionBaseEntity; // x0
  bool HasFlag; // w0
  RestrictionBaseEntity_o *v324; // x8
  bool v325; // w0
  __int64 v326; // x2
  BalanceConfig_c *v327; // x0
  System_Int32_array **v328; // x0
  System_String_array **v329; // x2
  System_String_array **v330; // x3
  System_Boolean_array **v331; // x4
  System_Int32_array **v332; // x5
  System_Int32_array *v333; // x6
  System_Int32_array *v334; // x7
  bool v335; // w0
  RestrictionBaseEntity_o *v336; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v337; // x21
  RestrictionWholeMaster_o *v338; // x0
  struct RestrictionWholeEntity_array *Entities; // x0
  struct RestrictionWholeEntity_array **p_restrictionWholeEntities; // x26
  System_String_array **v341; // x2
  System_String_array **v342; // x3
  System_Boolean_array **v343; // x4
  System_Int32_array **v344; // x5
  System_Int32_array *v345; // x6
  System_Int32_array *v346; // x7
  __int64 GroupId; // x0
  __int64 v348; // x1
  unsigned __int64 restrictionMessageId; // x2
  struct RestrictionWholeEntity_array *v350; // x19
  int max_length; // w8
  unsigned int v352; // w20
  RestrictionWholeEntity_o *v353; // x23
  QuestGroupMaster_o *v354; // x0
  System_Int32_array **v355; // x0
  System_String_array **v356; // x2
  System_String_array **v357; // x3
  System_Boolean_array **v358; // x4
  System_Int32_array **v359; // x5
  System_Int32_array *v360; // x6
  System_Int32_array *v361; // x7
  System_Array_o *v362; // x0
  Il2CppObject *v363; // x0
  System_Int32_array **v364; // x0
  System_String_array **v365; // x2
  System_String_array **v366; // x3
  System_Boolean_array **v367; // x4
  System_Int32_array **v368; // x5
  System_Int32_array *v369; // x6
  System_Int32_array *v370; // x7
  System_Array_o *v371; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v372; // x26
  Il2CppObject *v373; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v374; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v375; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *SetPossiblePosition; // x0
  System_Array_o *targetVals; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v378; // x26
  Il2CppObject *v379; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v380; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v381; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v382; // x0
  System_Array_o *v383; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v384; // x26
  Il2CppObject *v385; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v386; // x0
  System_Array_o *v387; // x0
  Il2CppObject *v388; // x0
  System_Int32_array **v389; // x0
  System_String_array **v390; // x2
  System_String_array **v391; // x3
  System_Boolean_array **v392; // x4
  System_Int32_array **v393; // x5
  System_Int32_array *v394; // x6
  System_Int32_array *v395; // x7
  __int64 v396; // x2
  BalanceConfig_c *v397; // x0
  System_Int32_array **v398; // x0
  System_String_array **v399; // x2
  System_String_array **v400; // x3
  System_Boolean_array **v401; // x4
  System_Int32_array **v402; // x5
  System_Int32_array *v403; // x6
  System_Int32_array *v404; // x7
  __int64 v405; // x2
  System_Int32_array **v406; // x0
  System_String_array **v407; // x2
  System_String_array **v408; // x3
  System_Boolean_array **v409; // x4
  System_Int32_array **v410; // x5
  System_Int32_array *v411; // x6
  System_Int32_array *v412; // x7
  __int64 v413; // x2
  System_Int32_array **v414; // x0
  System_String_array **v415; // x2
  System_String_array **v416; // x3
  System_Boolean_array **v417; // x4
  System_Int32_array **v418; // x5
  System_Int32_array *v419; // x6
  System_Int32_array *v420; // x7
  System_Int32_array **v421; // x0
  System_String_array **v422; // x2
  System_String_array **v423; // x3
  System_Boolean_array **v424; // x4
  System_Int32_array **v425; // x5
  System_Int32_array *v426; // x6
  System_Int32_array *v427; // x7
  System_Array_o *v428; // x0
  Il2CppObject *v429; // x0
  System_Int32_array **v430; // x0
  System_String_array **v431; // x2
  System_String_array **v432; // x3
  System_Boolean_array **v433; // x4
  System_Int32_array **v434; // x5
  System_Int32_array *v435; // x6
  System_Int32_array *v436; // x7
  System_Array_o *v437; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v438; // x26
  Il2CppObject *v439; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v440; // x0
  System_Array_o *v441; // x0
  Il2CppObject *v442; // x0
  System_Int32_array **v443; // x0
  System_String_array **v444; // x2
  System_String_array **v445; // x3
  System_Boolean_array **v446; // x4
  System_Int32_array **v447; // x5
  System_Int32_array *v448; // x6
  System_Int32_array *v449; // x7
  System_Array_o *v450; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v451; // x26
  Il2CppObject *v452; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v453; // x0
  struct System_Int32_array *v454; // x8
  __int64 v455; // x1
  __int64 v456; // x2
  __int64 v457; // x3
  __int64 v458; // x4
  QuestRestrictionInfo_DialogMessageInfo_o *v459; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v460; // x0
  QuestRestrictionInfo_o *v461; // x26
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **v462; // x28
  int isAllOutBattle; // w8
  QuestPhaseMaster_o *v464; // x0
  const MethodInfo *v465; // x4
  __int64 v466; // x2
  __int64 v467; // x0
  __int64 v468; // x22
  System_String_array **v469; // x3
  System_Boolean_array **v470; // x4
  System_Int32_array **v471; // x5
  System_Int32_array *v472; // x6
  System_Int32_array *v473; // x7
  BalanceConfig_c *v474; // x0
  System_Int32_array **v475; // x0
  System_String_array **v476; // x2
  System_String_array **v477; // x3
  System_Boolean_array **v478; // x4
  System_Int32_array **v479; // x5
  System_Int32_array *v480; // x6
  System_Int32_array *v481; // x7
  int32_t v482; // w22
  int i; // w23
  BalanceConfig_c *v484; // x0
  RestrictionSlotMaster_o *v485; // x0
  RestrictionSlotEntity_array *v486; // x0
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v487; // x24
  __int64 v488; // x1
  __int64 v489; // x2
  __int64 v490; // x3
  __int64 v491; // x4
  System_Collections_Generic_List_int__o *v492; // x23
  int v493; // w8
  __int64 v494; // x19
  WellFired_USFGOPlayBgmEventConditional_CondBGM_o *v495; // x26
  __int64 v496; // x1
  __int64 v497; // x2
  __int64 v498; // x3
  __int64 v499; // x4
  QuestRestrictionInfo_DialogMessageInfo_o *v500; // x26
  RestrictionSlotDetailMaster_o *v501; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *v502; // x0
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v503; // x23
  BattleServantConfConponent_c *klass; // x19
  __int64 v505; // x1
  __int64 v506; // x2
  __int64 v507; // x3
  __int64 v508; // x4
  QuestRestrictionInfo_SlotInfo_o *v509; // x27
  System_String_array **v510; // x3
  System_Boolean_array **v511; // x4
  System_Int32_array **v512; // x5
  System_Int32_array *v513; // x6
  System_Int32_array *v514; // x7
  int v515; // w20
  void **v516; // x0
  __int64 v517; // x3
  __int64 v518; // x4
  int servantNumMax; // w8
  BattleServantConfConponent_c *v520; // x8
  int32_t v521; // w23
  __int64 v522; // x8
  BattleServantConfConponent_c *v523; // x8
  __int64 v524; // x8
  QuestRestrictionInfo___c_c *v525; // x0
  struct QuestRestrictionInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_0; // x27
  Il2CppObject *v528; // x26
  struct QuestRestrictionInfo___c_StaticFields *v529; // x0
  System_String_array **v530; // x2
  System_String_array **v531; // x3
  System_Boolean_array **v532; // x4
  System_Int32_array **v533; // x5
  System_Int32_array *v534; // x6
  System_Int32_array *v535; // x7
  __int64 v536; // x1
  __int64 v537; // x2
  __int64 v538; // x3
  __int64 v539; // x4
  _BOOL4 v540; // w19
  QuestRestrictionInfo___c_c *v541; // x8
  struct QuestRestrictionInfo___c_StaticFields *v542; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_1; // x27
  Il2CppObject *v544; // x26
  struct QuestRestrictionInfo___c_StaticFields *v545; // x0
  System_String_array **v546; // x2
  System_String_array **v547; // x3
  System_Boolean_array **v548; // x4
  System_Int32_array **v549; // x5
  System_Int32_array *v550; // x6
  System_Int32_array *v551; // x7
  __int64 v552; // x1
  __int64 v553; // x2
  __int64 v554; // x3
  __int64 v555; // x4
  _BOOL4 v556; // w27
  QuestRestrictionInfo___c_c *v557; // x8
  struct QuestRestrictionInfo___c_StaticFields *v558; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_2; // x26
  Il2CppObject *v560; // x19
  struct QuestRestrictionInfo___c_StaticFields *v561; // x0
  System_String_array **v562; // x2
  System_String_array **v563; // x3
  System_Boolean_array **v564; // x4
  System_Int32_array **v565; // x5
  System_Int32_array *v566; // x6
  System_Int32_array *v567; // x7
  __int64 v568; // x3
  __int64 v569; // x4
  BattleServantConfConponent_c *v570; // x8
  __int64 v571; // x8
  BattleServantConfConponent_c *v572; // x8
  __int64 v573; // x8
  BattleServantConfConponent_c *v574; // x8
  __int64 v575; // x8
  int v576; // w8
  unsigned int v577; // w19
  WellFired_USFGOPlayBgmEventConditional_CondBGM_o *v578; // x27
  WellFired_USFGOPlayBgmEventConditional_CondBGM_o *v579; // x8
  BattleServantConfConponent_c *v580; // x8
  __int64 v581; // x8
  System_Array_o *monitor; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v583; // x26
  Il2CppObject *v584; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v585; // x0
  BattleServantConfConponent_c *v586; // x8
  __int64 v587; // x8
  System_Collections_Generic_List_VoiceCondType_Type__o *v588; // x0
  System_String_o *condValue; // x27
  BattleServantConfConponent_c *v590; // x8
  __int64 v591; // x8
  System_String_array **v592; // x3
  System_Boolean_array **v593; // x4
  System_Int32_array **v594; // x5
  System_Int32_array *v595; // x6
  System_Int32_array *v596; // x7
  BattleServantConfConponent_c *v597; // x8
  __int64 v598; // x8
  System_String_o **v599; // x26
  BattleServantConfConponent_o *v600; // x0
  System_Int32_array **v601; // x1
  BattleServantConfConponent_c *v602; // x8
  __int64 v603; // x27
  QuestRestrictionInfo___c_c *v604; // x0
  struct QuestRestrictionInfo___c_StaticFields *v605; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__82_3; // x26
  Il2CppObject *v607; // x19
  struct QuestRestrictionInfo___c_StaticFields *v608; // x0
  System_String_array **v609; // x2
  System_String_array **v610; // x3
  System_Boolean_array **v611; // x4
  System_Int32_array **v612; // x5
  System_Int32_array *v613; // x6
  System_Int32_array *v614; // x7
  BattleServantConfConponent_c *v615; // x10
  unsigned int namespaze; // w9
  void **v617; // x8
  __int64 *v618; // x8
  _DWORD *v619; // x11
  _DWORD *v620; // t1
  __int64 v621; // x8
  BattleServantConfConponent_c *v622; // x8
  __int64 v623; // x8
  BattleServantConfConponent_c *v624; // x8
  __int64 v625; // x8
  System_Int32_array **v626; // x0
  System_String_array **v627; // x2
  System_String_array **v628; // x3
  System_Boolean_array **v629; // x4
  System_Int32_array **v630; // x5
  System_Int32_array *v631; // x6
  System_Int32_array *v632; // x7
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v634; // w10
  unsigned int v635; // w11
  int v636; // w9
  int v637; // w20
  int32_t v638; // w19
  QuestRestrictionInfo_SlotInfo_o *v639; // x13
  NpcFollowerMaster_o *v640; // x0
  int v641; // w8
  unsigned int v642; // w9
  __int64 v643; // x10
  char v644; // w21
  bool v645; // w8
  bool v646; // w8
  RestrictionBaseEntity_o *v647; // x0
  Il2CppObject *Value_int__object; // x0
  int v649; // w9
  int DeckMemberMax; // w8
  BalanceConfig_c *v651; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *restrictionSlotDetailDictionary; // x0
  __int64 v653; // x8
  __int64 v654; // x8
  System_Array_o *v655; // x0
  Il2CppObject *v656; // x0
  System_Int32_array **v657; // x0
  System_String_array **v658; // x2
  System_String_array **v659; // x3
  System_Boolean_array **v660; // x4
  System_Int32_array **v661; // x5
  System_Int32_array *v662; // x6
  System_Int32_array *v663; // x7
  int32_t Count; // w0
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *restrictionSlotDictionary; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  _BOOL8 v667; // x0
  __int64 v668; // x1
  __int64 v669; // x2
  int v670; // w9
  unsigned int v671; // w10
  __int64 v672; // x11
  __int64 v673; // x1
  __int64 v674; // x2
  __int64 v675; // x3
  __int64 v676; // x4
  System_Text_StringBuilder_o *v677; // x20
  __int64 v678; // x1
  __int64 v679; // x2
  __int64 v680; // x3
  __int64 v681; // x4
  System_Text_StringBuilder_o *v682; // x21
  struct RestrictionWholeEntity_array *v683; // x19
  int v684; // w8
  unsigned int v685; // w22
  RestrictionWholeEntity_o *v686; // x24
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  int v689; // w25
  _BOOL4 v690; // w8
  System_Int32_array **v691; // x0
  System_String_array **v692; // x2
  System_String_array **v693; // x3
  System_Boolean_array **v694; // x4
  System_Int32_array **v695; // x5
  System_Int32_array *v696; // x6
  System_Int32_array *v697; // x7
  System_String_o *v698; // x19
  System_String_o *v699; // x0
  System_Int32_array **v700; // x0
  System_String_array **v701; // x2
  System_String_array **v702; // x3
  System_Boolean_array **v703; // x4
  System_Int32_array **v704; // x5
  System_Int32_array *v705; // x6
  System_Int32_array *v706; // x7
  BattleServantConfConponent_o *p_svtIdForceBattleList; // [xsp+0h] [xbp-190h]
  struct RestrictionWholeEntity_array **v708; // [xsp+8h] [xbp-188h]
  BattleServantConfConponent_o *p_confirmRestrictionMessage; // [xsp+10h] [xbp-180h]
  BattleServantConfConponent_o *p_restrictionMessage; // [xsp+18h] [xbp-178h]
  BattleServantConfConponent_o *v711; // [xsp+20h] [xbp-170h]
  BattleServantConfConponent_o *p_uniqueIndividualitys; // [xsp+28h] [xbp-168h]
  BattleServantConfConponent_o *p_needStartingIndividualities; // [xsp+30h] [xbp-160h]
  BattleServantConfConponent_o *p_fixedNpcIndividualities; // [xsp+38h] [xbp-158h]
  BattleServantConfConponent_o *p_fixedSupportIndividualities; // [xsp+40h] [xbp-150h]
  struct System_Collections_Generic_List_int____o **p_needStartingIndividualitiesList; // [xsp+50h] [xbp-140h]
  struct System_Collections_Generic_List_int____o **p_fixedNpcIndividualitiesList; // [xsp+58h] [xbp-138h]
  struct System_Collections_Generic_List_int____o **p_fixedSupportIndividualitiesList; // [xsp+60h] [xbp-130h]
  struct System_Collections_Generic_List_int____o **p_fixedMyServantIndividualitiesList; // [xsp+68h] [xbp-128h]
  struct System_Collections_Generic_List_bool____o **p_myServantPositionsList; // [xsp+70h] [xbp-120h]
  struct System_Collections_Generic_List_int____o **p_fixedIndividualitiesList; // [xsp+78h] [xbp-118h]
  struct System_Collections_Generic_List_bool____o **p_positionsList; // [xsp+80h] [xbp-110h]
  struct System_Int32_array **p_deckDispLimitCountList; // [xsp+88h] [xbp-108h]
  struct System_Int32_array **p_deckLimitCountList; // [xsp+90h] [xbp-100h]
  _BOOL4 v726; // [xsp+90h] [xbp-100h]
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o **p_restrictionSlotDetailDictionary; // [xsp+98h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o **p_restrictionSlotDictionary; // [xsp+A0h] [xbp-F0h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_dialogMessageInfoDictionary; // [xsp+A8h] [xbp-E8h]
  RestrictionBaseEntity_o **p_restrictionBaseEntity; // [xsp+B0h] [xbp-E0h]
  BattleServantConfConponent_o *p_deckSvtIdList; // [xsp+B8h] [xbp-D8h]
  _BOOL4 v732; // [xsp+B8h] [xbp-D8h]
  int32_t questIdb; // [xsp+C4h] [xbp-CCh]
  QuestRestrictionInfo_o *v735; // [xsp+C8h] [xbp-C8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v736; // [xsp+D0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v737; // [xsp+D8h] [xbp-B8h] BYREF
  int v738; // [xsp+F0h] [xbp-A0h]
  int v739; // [xsp+F8h] [xbp-98h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v740; // [xsp+100h] [xbp-90h] BYREF
  WarEntity_o *v741; // [xsp+118h] [xbp-78h] BYREF
  WarEntity_o *entity; // [xsp+120h] [xbp-70h] BYREF
  QuestPhaseEntity_o *v743; // [xsp+128h] [xbp-68h] BYREF
  WarEntity_o *v744; // [xsp+130h] [xbp-60h] BYREF

  if ( (byte_40FD588 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_BasicHelper_Any_RestrictionSlotDetailEntity___, v9);
    sub_B16FFC(&Method_BasicHelper_Any_RestrictionSlotEntity___, v10);
    sub_B16FFC(&Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcFollowerMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestGroupMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMaster_RestrictionBaseMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMaster_RestrictionMessageMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMaster_RestrictionSlotDetailMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMaster_RestrictionSlotMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMaster_RestrictionWholeMaster___, v20);
    sub_B16FFC(&DataManager_TypeInfo, v21);
    sub_B16FFC(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__, v22);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v23);
    sub_B16FFC(&QuestRestrictionInfo_DialogMessageInfo_TypeInfo, v24);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__, v33);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__, v34);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__, v35);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo, v36);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo, v37);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo, v38);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__,
      v39);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__,
      v40);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____get_Current__,
      v41);
    sub_B16FFC(&Method_System_Func_RestrictionSlotEntity__bool___ctor__, v42);
    sub_B16FFC(&Method_System_Func_RestrictionSlotDetailEntity__bool___ctor__, v43);
    sub_B16FFC(&System_Func_RestrictionSlotDetailEntity__bool__TypeInfo, v44);
    sub_B16FFC(&System_Func_RestrictionSlotEntity__bool__TypeInfo, v45);
    sub_B16FFC(&int___TypeInfo, v46);
    sub_B16FFC(&Method_System_Collections_Generic_List_int____Add__, v47);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__, v48);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool____Add__, v49);
    sub_B16FFC(&Method_System_Collections_Generic_List_Restriction_RangeType__Add__, v50);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v51);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__, v52);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v53);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__, v54);
    sub_B16FFC(&Method_System_Collections_Generic_List_int_____ctor__, v55);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool_____ctor__, v56);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v57);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v58);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__, v59);
    sub_B16FFC(&System_Collections_Generic_List_int____TypeInfo, v60);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v61);
    sub_B16FFC(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v62);
    sub_B16FFC(&System_Collections_Generic_List_bool____TypeInfo, v63);
    sub_B16FFC(&System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo, v64);
    sub_B16FFC(&LocalizationManager_TypeInfo, v65);
    sub_B16FFC(&QuestRestrictionInfo_SlotInfo___TypeInfo, v66);
    sub_B16FFC(&QuestRestrictionInfo_SlotInfo_TypeInfo, v67);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v68);
    sub_B16FFC(&Method_QuestRestrictionInfo___c__Setup_b__82_0__, v69);
    sub_B16FFC(&Method_QuestRestrictionInfo___c__Setup_b__82_1__, v70);
    sub_B16FFC(&Method_QuestRestrictionInfo___c__Setup_b__82_2__, v71);
    sub_B16FFC(&Method_QuestRestrictionInfo___c__Setup_b__82_3__, v72);
    sub_B16FFC(&QuestRestrictionInfo___c_TypeInfo, v73);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__,
      v74);
    sub_B16FFC(&StringLiteral_26, v75);
    sub_B16FFC(&StringLiteral_10361, v76);
    sub_B16FFC(&StringLiteral_10330, v77);
    sub_B16FFC(&StringLiteral_1, v78);
    byte_40FD588 = 1;
  }
  v743 = 0LL;
  v744 = 0LL;
  v741 = 0LL;
  entity = 0LL;
  memset(&v740, 0, sizeof(v740));
  v739 = 0;
  this->fields.isRestriction = 0;
  p_restrictionMessage = (BattleServantConfConponent_o *)&this->fields.restrictionMessage;
  v79 = (struct System_String_o *)StringLiteral_1;
  v80 = (System_Int32_array **)StringLiteral_1;
  this->fields.restrictionMessage = (struct System_String_o *)StringLiteral_1;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.restrictionMessage,
    v80,
    *(System_String_array ***)&questId,
    *(System_String_array ***)&questPhase,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.confirmRestrictionMessage = v79;
  p_confirmRestrictionMessage = (BattleServantConfConponent_o *)&this->fields.confirmRestrictionMessage;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.confirmRestrictionMessage,
    (System_Int32_array **)v79,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  this->fields.supportOnlyRestrictionEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.supportOnlyRestrictionEntity,
    0LL,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  this->fields.uniqueSvtRestrictionEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.uniqueSvtRestrictionEntity,
    0LL,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  this->fields.deckSvtIdList = 0LL;
  p_deckSvtIdList = (BattleServantConfConponent_o *)&this->fields.deckSvtIdList;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.deckSvtIdList, 0LL, v99, v100, v101, v102, v103, v104);
  this->fields.fixedSupportPositionRestrictionEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fixedSupportPositionRestrictionEntity,
    0LL,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  this->fields.supportPositionList = 0LL;
  p_supportPositionList = (BattleServantConfConponent_o *)&this->fields.supportPositionList;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.supportPositionList, 0LL, v112, v113, v114, v115, v116, v117);
  this->fields.fixedMyServantPositionRestrictionEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
    0LL,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  this->fields.servantNumRestrictionEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantNumRestrictionEntity,
    0LL,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  this->fields.servantNumMax = 0;
  this->fields.myServantNumRestrictionEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.myServantNumRestrictionEntity,
    0LL,
    v130,
    v131,
    v132,
    v133,
    v134,
    v135);
  this->fields.myServantNumMax = 0;
  *(_WORD *)&this->fields.isSupportOnlyForceBattle = 0;
  this->fields.svtIdForceBattleList = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList,
    0LL,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  this->fields.isFatigure = 0;
  this->fields.isNpcEditablePos = 0;
  *(_WORD *)&this->fields.isNpcMultipleBattle = 0;
  this->fields.eventDeckNum = 0;
  v146 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_RestrictionEntity__TypeInfo,
                                                                                                   v142,
                                                                                                   v143,
                                                                                                   v144,
                                                                                                   v145);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v146,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  this->fields.myServantOrNpcRestrictionEntityList = (struct System_Collections_Generic_List_RestrictionEntity__o *)v146;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.myServantOrNpcRestrictionEntityList,
    (System_Int32_array **)v146,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
  v157 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v153,
                                                     v154,
                                                     v155,
                                                     v156);
  System_Collections_Generic_List_int____ctor(
    v157,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.specifiedPositionList = v157;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.specifiedPositionList,
    (System_Int32_array **)v157,
    v158,
    v159,
    v160,
    v161,
    v162,
    v163);
  this->fields.isNotTransitionSupportList = 0;
  this->fields.supportInitIndex = 0;
  this->fields.fixedServantPositionRestrictionEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fixedServantPositionRestrictionEntity,
    0LL,
    v164,
    v165,
    v166,
    v167,
    v168,
    v169);
  this->fields.uniqueIndividualityEntity = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.uniqueIndividualityEntity,
    0LL,
    v170,
    v171,
    v172,
    v173,
    v174,
    v175);
  this->fields.isAllOutBattle = 0;
  this->fields.isDataLostBattle = 0;
  this->fields.allOutBattleGroupNo = -1;
  this->fields.dataLostBattleId = -1;
  this->fields.deckLimitCountList = 0LL;
  p_deckLimitCountList = &this->fields.deckLimitCountList;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.deckLimitCountList, 0LL, v176, v177, v178, v179, v180, v181);
  this->fields.deckDispLimitCountList = 0LL;
  p_deckDispLimitCountList = &this->fields.deckDispLimitCountList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.deckDispLimitCountList,
    0LL,
    v182,
    v183,
    v184,
    v185,
    v186,
    v187);
  this->fields.isNotSingleSupportOnly = 0;
  *(_DWORD *)&this->fields.isUniqueServant = 0;
  v192 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_bool____TypeInfo,
                                                                                                   v188,
                                                                                                   v189,
                                                                                                   v190,
                                                                                                   v191);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v192,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)v192;
  p_positionsList = &this->fields.positionsList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.positionsList,
    (System_Int32_array **)v192,
    v193,
    v194,
    v195,
    v196,
    v197,
    v198);
  v203 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_int____TypeInfo,
                                                                                                   v199,
                                                                                                   v200,
                                                                                                   v201,
                                                                                                   v202);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v203,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v203;
  p_fixedIndividualitiesList = &this->fields.fixedIndividualitiesList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fixedIndividualitiesList,
    (System_Int32_array **)v203,
    v204,
    v205,
    v206,
    v207,
    v208,
    v209);
  this->fields.isFixedMyServantPosition = 0;
  v214 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_bool____TypeInfo,
                                                                                                   v210,
                                                                                                   v211,
                                                                                                   v212,
                                                                                                   v213);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v214,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_bool_____ctor__);
  this->fields.myServantPositionsList = (struct System_Collections_Generic_List_bool____o *)v214;
  p_myServantPositionsList = &this->fields.myServantPositionsList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.myServantPositionsList,
    (System_Int32_array **)v214,
    v215,
    v216,
    v217,
    v218,
    v219,
    v220);
  v225 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_int____TypeInfo,
                                                                                                   v221,
                                                                                                   v222,
                                                                                                   v223,
                                                                                                   v224);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v225,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedMyServantIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v225;
  p_fixedMyServantIndividualitiesList = &this->fields.fixedMyServantIndividualitiesList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fixedMyServantIndividualitiesList,
    (System_Int32_array **)v225,
    v226,
    v227,
    v228,
    v229,
    v230,
    v231);
  this->fields.isFixedSupportPosition = 0;
  v236 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_int____TypeInfo,
                                                                                                   v232,
                                                                                                   v233,
                                                                                                   v234,
                                                                                                   v235);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v236,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedSupportIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v236;
  p_fixedSupportIndividualitiesList = &this->fields.fixedSupportIndividualitiesList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fixedSupportIndividualitiesList,
    (System_Int32_array **)v236,
    v237,
    v238,
    v239,
    v240,
    v241,
    v242);
  this->fields.isFixedNpcPosition = 0;
  v247 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_int____TypeInfo,
                                                                                                   v243,
                                                                                                   v244,
                                                                                                   v245,
                                                                                                   v246);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v247,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.fixedNpcIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v247;
  p_fixedNpcIndividualitiesList = &this->fields.fixedNpcIndividualitiesList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fixedNpcIndividualitiesList,
    (System_Int32_array **)v247,
    v248,
    v249,
    v250,
    v251,
    v252,
    v253);
  this->fields.npcPositionList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.npcPositionList, 0LL, v254, v255, v256, v257, v258, v259);
  v264 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_int____TypeInfo,
                                                                                                   v260,
                                                                                                   v261,
                                                                                                   v262,
                                                                                                   v263);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v264,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.needStartingIndividualitiesList = (struct System_Collections_Generic_List_int____o *)v264;
  p_needStartingIndividualitiesList = &this->fields.needStartingIndividualitiesList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.needStartingIndividualitiesList,
    (System_Int32_array **)v264,
    v265,
    v266,
    v267,
    v268,
    v269,
    v270);
  this->fields.isNeedStarting = 0;
  this->fields.isFixedMyServantSingle = 0;
  *(_WORD *)&this->fields.isMyServantOrNpc = 0;
  this->fields.slotInfos = 0LL;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v272, v273, v274, v275, v276, v277);
  this->fields.dialogMessageInfoDictionary = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dialogMessageInfoDictionary,
    0LL,
    v278,
    v279,
    v280,
    v281,
    v282,
    v283);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_378;
  p_restrictionBaseEntity = &this->fields.restrictionBaseEntity;
  if ( RestrictionBaseMaster__TryGetEntity(
         (RestrictionBaseMaster_o *)Master_WarQuestSelectionMaster,
         &this->fields.restrictionBaseEntity,
         this->fields.questId,
         this->fields.questPhase,
         0LL) )
  {
    this->fields.isRestriction = 1;
    v289 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____TypeInfo, v285, v286, v287, v288);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v289,
      (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity_____ctor__);
    this->fields.restrictionSlotDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____o *)v289;
    p_restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o **)&this->fields.restrictionSlotDictionary;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.restrictionSlotDictionary,
      (System_Int32_array **)v289,
      v290,
      v291,
      v292,
      v293,
      v294,
      v295);
    v300 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____TypeInfo, v296, v297, v298, v299);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v300,
      (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity_____ctor__);
    this->fields.restrictionSlotDetailDictionary = (struct System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____o *)v300;
    p_restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o **)&this->fields.restrictionSlotDetailDictionary;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.restrictionSlotDetailDictionary,
      (System_Int32_array **)v300,
      v301,
      v302,
      v303,
      v304,
      v305,
      v306);
    v311 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__TypeInfo, v307, v308, v309, v310);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v311,
      (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo___ctor__);
    this->fields.dialogMessageInfoDictionary = (struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *)v311;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.dialogMessageInfoDictionary,
      (System_Int32_array **)v311,
      v312,
      v313,
      v314,
      v315,
      v316,
      v317);
    v736 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_List_RestrictionMessageEntity__TypeInfo,
                                                                                                     v318,
                                                                                                     v319,
                                                                                                     v320,
                                                                                                     v321);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v736,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_RestrictionMessageEntity___ctor__);
    restrictionBaseEntity = this->fields.restrictionBaseEntity;
    if ( !restrictionBaseEntity )
      goto LABEL_378;
    HasFlag = RestrictionBaseEntity__HasFlag(restrictionBaseEntity, 2LL, 0LL);
    v324 = this->fields.restrictionBaseEntity;
    this->fields.isNotTransitionSupportList = HasFlag;
    if ( !v324 )
      goto LABEL_378;
    if ( RestrictionBaseEntity__HasFlag(v324, 4LL, 0LL) )
    {
      if ( !*p_restrictionBaseEntity )
        goto LABEL_378;
      this->fields.eventDeckNum = RestrictionBaseEntity__GetUserEventDeckNo(*p_restrictionBaseEntity, 0LL);
    }
    if ( !*p_restrictionBaseEntity )
      goto LABEL_378;
    v325 = RestrictionBaseEntity__HasFlag(*p_restrictionBaseEntity, 16LL, 0LL);
    this->fields.isUniqueServant = v325;
    if ( v325 )
    {
      v327 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v327 = BalanceConfig_TypeInfo;
      }
      v328 = (System_Int32_array **)sub_B17014(int___TypeInfo, (unsigned int)v327->static_fields->DeckMemberMax, v326);
      p_deckSvtIdList->klass = (BattleServantConfConponent_c *)v328;
      sub_B16F98(p_deckSvtIdList, v328, v329, v330, v331, v332, v333, v334);
    }
    if ( !*p_restrictionBaseEntity )
      goto LABEL_378;
    v335 = RestrictionBaseEntity__HasFlag(*p_restrictionBaseEntity, 32LL, 0LL);
    v336 = this->fields.restrictionBaseEntity;
    this->fields.isNotSingleSupportOnly = v335;
    if ( !v336 )
      goto LABEL_378;
    RestrictionBaseEntity__GetOverwriteLimitCountSvtIds(
      v336,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v337 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_RestrictionMessageMaster___);
    v338 = (RestrictionWholeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_RestrictionWholeMaster___);
    if ( !*p_restrictionBaseEntity )
      goto LABEL_378;
    if ( !v338 )
      goto LABEL_378;
    p_svtIdForceBattleList = (BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList;
    p_dialogMessageInfoDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&this->fields.dialogMessageInfoDictionary;
    Entities = RestrictionWholeMaster__GetEntities(v338, (*p_restrictionBaseEntity)->fields.restrictionWholeId, 0LL);
    v735 = this;
    this->fields.restrictionWholeEntities = Entities;
    p_restrictionWholeEntities = &this->fields.restrictionWholeEntities;
    sub_B16F98(
      (BattleServantConfConponent_o *)p_restrictionWholeEntities,
      (System_Int32_array **)Entities,
      v341,
      v342,
      v343,
      v344,
      v345,
      v346);
    v350 = *p_restrictionWholeEntities;
    v708 = p_restrictionWholeEntities;
    if ( !*p_restrictionWholeEntities )
      goto LABEL_378;
    max_length = v350->max_length;
    if ( max_length >= 1 )
    {
      v352 = 0;
      p_fixedSupportIndividualities = (BattleServantConfConponent_o *)&v735->fields.fixedSupportIndividualities;
      p_fixedNpcIndividualities = (BattleServantConfConponent_o *)&v735->fields.fixedNpcIndividualities;
      p_uniqueIndividualitys = (BattleServantConfConponent_o *)&v735->fields.uniqueIndividualitys;
      p_needStartingIndividualities = (BattleServantConfConponent_o *)&v735->fields.needStartingIndividualities;
      v711 = p_supportPositionList;
      while ( 2 )
      {
        if ( v352 >= max_length )
          goto LABEL_379;
        v353 = v350->m_Items[v352];
        if ( v353 )
        {
          switch ( v353->fields.type )
          {
            case 2:
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              v354 = (QuestGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestGroupMaster___);
              if ( !v354 )
                goto LABEL_378;
              GroupId = QuestGroupMaster__GetGroupId(v354, questId, 17, 0LL);
              v735->fields.allOutBattleGroupNo = GroupId;
              v735->fields.isAllOutBattle = 1;
              goto LABEL_66;
            case 3:
              GroupId = System_Linq_Enumerable__Min(
                          (System_Collections_Generic_IEnumerable_int__o *)v353->fields.targetVals,
                          0LL);
              v735->fields.servantNumMax = GroupId - 1;
              goto LABEL_66;
            case 4:
              v375 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_positionsList;
              SetPossiblePosition = (EventMissionProgressRequest_Argument_ProgressData_o *)RestrictionWholeEntity__GetSetPossiblePosition(
                                                                                             v353,
                                                                                             0LL);
              if ( !v375 )
                goto LABEL_378;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v375,
                SetPossiblePosition,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_bool____Add__);
              targetVals = (System_Array_o *)v353->fields.targetVals;
              if ( !targetVals )
                goto LABEL_378;
              v378 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedIndividualitiesList;
              v379 = System_Array__Clone(targetVals, 0LL);
              if ( !v378 )
                goto LABEL_378;
              v380 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B170BC(v379, int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v378,
                v380,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_int____Add__);
              v735->fields.isFixedPosition = 1;
              goto LABEL_66;
            case 5:
              v381 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_myServantPositionsList;
              v382 = (EventMissionProgressRequest_Argument_ProgressData_o *)RestrictionWholeEntity__GetSetPossiblePosition(
                                                                              v353,
                                                                              0LL);
              if ( !v381 )
                goto LABEL_378;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v381,
                v382,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_bool____Add__);
              v383 = (System_Array_o *)v353->fields.targetVals;
              if ( !v383 )
                goto LABEL_378;
              v384 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedMyServantIndividualitiesList;
              v385 = System_Array__Clone(v383, 0LL);
              if ( !v384 )
                goto LABEL_378;
              v386 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B170BC(v385, int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v384,
                v386,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_int____Add__);
              v735->fields.isFixedMyServantPosition = 1;
              goto LABEL_66;
            case 6:
              v355 = (System_Int32_array **)RestrictionWholeEntity__GetSetPossiblePosition(v353, 0LL);
              p_supportPositionList->klass = (BattleServantConfConponent_c *)v355;
              sub_B16F98(p_supportPositionList, v355, v356, v357, v358, v359, v360, v361);
              v362 = (System_Array_o *)v353->fields.targetVals;
              if ( !v362 )
                goto LABEL_378;
              v363 = System_Array__Clone(v362, 0LL);
              v364 = (System_Int32_array **)sub_B170BC(v363, int___TypeInfo);
              p_fixedSupportIndividualities->klass = (BattleServantConfConponent_c *)v364;
              sub_B16F98(p_fixedSupportIndividualities, v364, v365, v366, v367, v368, v369, v370);
              v371 = (System_Array_o *)v353->fields.targetVals;
              if ( !v371 )
                goto LABEL_378;
              v372 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedSupportIndividualitiesList;
              v373 = System_Array__Clone(v371, 0LL);
              if ( !v372 )
                goto LABEL_378;
              v374 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B170BC(v373, int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v372,
                v374,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_int____Add__);
              v735->fields.isFixedSupportPosition = 1;
              goto LABEL_66;
            case 7:
              v421 = (System_Int32_array **)RestrictionWholeEntity__GetSetPossiblePosition(v353, 0LL);
              p_supportPositionList->klass = (BattleServantConfConponent_c *)v421;
              sub_B16F98(p_supportPositionList, v421, v422, v423, v424, v425, v426, v427);
              v428 = (System_Array_o *)v353->fields.targetVals;
              if ( !v428 )
                goto LABEL_378;
              v429 = System_Array__Clone(v428, 0LL);
              v430 = (System_Int32_array **)sub_B170BC(v429, int___TypeInfo);
              p_fixedNpcIndividualities->klass = (BattleServantConfConponent_c *)v430;
              sub_B16F98(p_fixedNpcIndividualities, v430, v431, v432, v433, v434, v435, v436);
              v437 = (System_Array_o *)v353->fields.targetVals;
              if ( !v437 )
                goto LABEL_378;
              v438 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixedNpcIndividualitiesList;
              v439 = System_Array__Clone(v437, 0LL);
              if ( !v438 )
                goto LABEL_378;
              v440 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B170BC(v439, int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v438,
                v440,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_int____Add__);
              v735->fields.isFixedNpcPosition = 1;
              goto LABEL_66;
            case 8:
              v441 = (System_Array_o *)v353->fields.targetVals;
              if ( !v441 )
                goto LABEL_378;
              v442 = System_Array__Clone(v441, 0LL);
              v443 = (System_Int32_array **)sub_B170BC(v442, int___TypeInfo);
              p_needStartingIndividualities->klass = (BattleServantConfConponent_c *)v443;
              sub_B16F98(p_needStartingIndividualities, v443, v444, v445, v446, v447, v448, v449);
              v450 = (System_Array_o *)v353->fields.targetVals;
              if ( !v450 )
                goto LABEL_378;
              v451 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_needStartingIndividualitiesList;
              v452 = System_Array__Clone(v450, 0LL);
              if ( !v451 )
                goto LABEL_378;
              v453 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B170BC(v452, int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v451,
                v453,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_int____Add__);
              v735->fields.isNeedStarting = 1;
              goto LABEL_66;
            case 9:
              v387 = (System_Array_o *)v353->fields.targetVals;
              if ( !v387 )
                goto LABEL_378;
              v388 = System_Array__Clone(v387, 0LL);
              v389 = (System_Int32_array **)sub_B170BC(v388, int___TypeInfo);
              p_uniqueIndividualitys->klass = (BattleServantConfConponent_c *)v389;
              sub_B16F98(p_uniqueIndividualitys, v389, v390, v391, v392, v393, v394, v395);
              v397 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v397 = BalanceConfig_TypeInfo;
              }
              v398 = (System_Int32_array **)sub_B17014(
                                              int___TypeInfo,
                                              (unsigned int)v397->static_fields->DeckMemberMax,
                                              v396);
              v735->fields.deckSvtIdList = (struct System_Int32_array *)v398;
              sub_B16F98(p_deckSvtIdList, v398, v399, v400, v401, v402, v403, v404);
              v406 = (System_Int32_array **)sub_B17014(
                                              int___TypeInfo,
                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax,
                                              v405);
              v735->fields.deckLimitCountList = (struct System_Int32_array *)v406;
              sub_B16F98((BattleServantConfConponent_o *)p_deckLimitCountList, v406, v407, v408, v409, v410, v411, v412);
              v414 = (System_Int32_array **)sub_B17014(
                                              int___TypeInfo,
                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax,
                                              v413);
              v735->fields.deckDispLimitCountList = (struct System_Int32_array *)v414;
              sub_B16F98(
                (BattleServantConfConponent_o *)p_deckDispLimitCountList,
                v414,
                v415,
                v416,
                v417,
                v418,
                v419,
                v420);
              p_supportPositionList = v711;
              v735->fields.isUniqueIndividuality = 1;
              goto LABEL_66;
            case 0xA:
              v735->fields.isDataLostBattle = 1;
              v454 = v353->fields.targetVals;
              if ( !v454 )
                goto LABEL_378;
              if ( !v454->max_length )
                goto LABEL_379;
              v735->fields.dataLostBattleId = v454->m_Items[1];
LABEL_66:
              restrictionMessageId = (unsigned int)v353->fields.restrictionMessageId;
              if ( (int)restrictionMessageId < 1 )
                goto LABEL_75;
              if ( !v337 )
                goto LABEL_378;
              GroupId = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                          v337,
                          &entity,
                          restrictionMessageId,
                          (const MethodInfo_266F3E4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
              if ( (GroupId & 1) == 0 )
                goto LABEL_75;
              if ( !v736 )
                goto LABEL_378;
              GroupId = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v736,
                          (WarBoardManager_TaskList_o *)entity,
                          (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (GroupId & 1) != 0 )
                goto LABEL_75;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v736,
                (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
              v459 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_B170CC(
                                                                   QuestRestrictionInfo_DialogMessageInfo_TypeInfo,
                                                                   v455,
                                                                   v456,
                                                                   v457,
                                                                   v458);
              QuestRestrictionInfo_DialogMessageInfo___ctor(v459, 0LL);
              if ( !v459 )
                goto LABEL_378;
              v459->fields.restrictionType = v353->fields.type;
              if ( !entity || !*p_dialogMessageInfoDictionary )
                goto LABEL_378;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                *p_dialogMessageInfoDictionary,
                entity->fields.id,
                (WarBoardEvalValueSquare_EvalValueSquare_o *)v459,
                (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
LABEL_75:
              max_length = v350->max_length;
              if ( (int)++v352 >= max_length )
                goto LABEL_76;
              continue;
            default:
              goto LABEL_66;
          }
        }
        goto LABEL_378;
      }
    }
LABEL_76:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v460 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
    v461 = v735;
    if ( !v460 )
      goto LABEL_378;
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      v460,
      &v744,
      questId,
      (const MethodInfo_266F3E4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    if ( !v744 )
      goto LABEL_378;
    v462 = p_dialogMessageInfoDictionary;
    if ( QuestEntity__HasFlag_23922108((QuestEntity_o *)v744, 0x100000LL, questPhase, 0LL) )
    {
      if ( !v735 )
        goto LABEL_378;
      isAllOutBattle = 1;
    }
    else
    {
      isAllOutBattle = v735->fields.isAllOutBattle;
    }
    v735->fields.isNoSupportBattle = isAllOutBattle != 0;
    if ( !v744 )
      goto LABEL_378;
    v735->fields.isSupportOnlyForceBattle = QuestEntity__HasFlag_23922108(
                                              (QuestEntity_o *)v744,
                                              0x80000LL,
                                              questPhase,
                                              0LL);
    if ( !v744 )
      goto LABEL_378;
    v735->fields.isFatigure = QuestEntity__HasFlag_23922108((QuestEntity_o *)v744, 0x200000LL, questPhase, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v464 = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !v464 )
LABEL_378:
      sub_B170D4();
    if ( QuestPhaseMaster__TryGetEntity(v464, &v743, questId, questPhase, v465) )
    {
      v467 = sub_B17014(int___TypeInfo, 1LL, v466);
      if ( !v743 )
        goto LABEL_378;
      v468 = v467;
      GroupId = QuestPhaseEntity__GetSingleForceSvtId(v743, 0LL);
      if ( !v468 )
        goto LABEL_378;
      if ( !*(_DWORD *)(v468 + 24) )
        goto LABEL_379;
      *(_DWORD *)(v468 + 32) = GroupId;
      p_svtIdForceBattleList->klass = (BattleServantConfConponent_c *)v468;
      sub_B16F98(
        p_svtIdForceBattleList,
        (System_Int32_array **)v468,
        (System_String_array **)restrictionMessageId,
        v469,
        v470,
        v471,
        v472,
        v473);
      if ( !v743 )
        goto LABEL_378;
      v735->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v743, 0LL);
      if ( !v743 )
        goto LABEL_378;
      v735->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v743, 0LL);
    }
    else
    {
      v735->fields.correctionIconId = -1;
    }
    v474 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v474 = BalanceConfig_TypeInfo;
    }
    v475 = (System_Int32_array **)sub_B17014(
                                    QuestRestrictionInfo_SlotInfo___TypeInfo,
                                    (unsigned int)v474->static_fields->DeckMemberMax,
                                    v466);
    p_fields->klass = (BattleServantConfConponent_c *)v475;
    sub_B16F98(p_fields, v475, v476, v477, v478, v479, v480, v481);
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_378;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      *p_restrictionSlotDictionary,
      (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Clear__);
    if ( !*p_restrictionSlotDetailDictionary )
      goto LABEL_378;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
      *p_restrictionSlotDetailDictionary,
      (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Clear__);
    v482 = 1;
    for ( i = 1; ; i = v521 & v732 )
    {
      v484 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v484 = BalanceConfig_TypeInfo;
      }
      if ( v482 > v484->static_fields->DeckMemberMax )
        break;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v485 = (RestrictionSlotMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_RestrictionSlotMaster___);
      if ( !*p_restrictionBaseEntity )
        goto LABEL_378;
      questIdb = i;
      if ( !v485 )
        goto LABEL_378;
      v486 = RestrictionSlotMaster__GetEntities(v485, (*p_restrictionBaseEntity)->fields.restrictionSlotId, v482, 0LL);
      if ( !v486 )
        goto LABEL_378;
      v487 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v486;
      v732 = *(_QWORD *)&v486->max_length != 0LL;
      if ( !*p_restrictionSlotDictionary )
        goto LABEL_378;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)*p_restrictionSlotDictionary,
        v482,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v486,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____Add__);
      v492 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                         System_Collections_Generic_List_int__TypeInfo,
                                                         v488,
                                                         v489,
                                                         v490,
                                                         v491);
      System_Collections_Generic_List_int____ctor(
        v492,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      v493 = v487->max_length;
      if ( v493 >= 1 )
      {
        v494 = 0LL;
        while ( (unsigned int)v494 < v493 )
        {
          v495 = v487->m_Items[v494];
          if ( !v495 || !v492 )
            goto LABEL_378;
          GroupId = System_Collections_Generic_List_int___Contains(
                      v492,
                      (int32_t)v495[1].monitor,
                      (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (GroupId & 1) == 0 )
            System_Collections_Generic_List_int___Add(
              v492,
              (int32_t)v495[1].monitor,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          restrictionMessageId = HIDWORD(v495[1].monitor);
          if ( (int)restrictionMessageId >= 1 )
          {
            if ( !v337 )
              goto LABEL_378;
            GroupId = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                        v337,
                        &v741,
                        restrictionMessageId,
                        (const MethodInfo_266F3E4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int__TryGetEntity__);
            if ( (GroupId & 1) != 0 )
            {
              if ( !v736 )
                goto LABEL_378;
              GroupId = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v736,
                          (WarBoardManager_TaskList_o *)v741,
                          (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Contains__);
              if ( (GroupId & 1) == 0 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v736,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v741,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__Add__);
                v500 = (QuestRestrictionInfo_DialogMessageInfo_o *)sub_B170CC(
                                                                     QuestRestrictionInfo_DialogMessageInfo_TypeInfo,
                                                                     v496,
                                                                     v497,
                                                                     v498,
                                                                     v499);
                QuestRestrictionInfo_DialogMessageInfo___ctor(v500, 0LL);
                if ( !v500 )
                  goto LABEL_378;
                v500->fields.slotNo = v482;
                if ( !v741 || !*v462 )
                  goto LABEL_378;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  *v462,
                  v741->fields.id,
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v500,
                  (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__Add__);
              }
            }
          }
          v493 = v487->max_length;
          if ( (int)++v494 >= v493 )
            goto LABEL_134;
        }
        goto LABEL_379;
      }
LABEL_134:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v501 = (RestrictionSlotDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_RestrictionSlotDetailMaster___);
      if ( !v501 )
        goto LABEL_378;
      v502 = (WarBoardEvalValueSquare_EvalValueSquare_o *)RestrictionSlotDetailMaster__GetEntities(v501, v492, 0LL);
      if ( !*p_restrictionSlotDetailDictionary )
        goto LABEL_378;
      v503 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v502;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)*p_restrictionSlotDetailDictionary,
        v482,
        v502,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____Add__);
      klass = p_fields->klass;
      v509 = (QuestRestrictionInfo_SlotInfo_o *)sub_B170CC(
                                                  QuestRestrictionInfo_SlotInfo_TypeInfo,
                                                  v505,
                                                  v506,
                                                  v507,
                                                  v508);
      QuestRestrictionInfo_SlotInfo___ctor(v509, 0LL);
      if ( !klass )
        goto LABEL_378;
      if ( v509 )
      {
        GroupId = sub_B170BC(v509, *((_QWORD *)klass->_1.image + 8));
        if ( !GroupId )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      v515 = v482 - 1;
      if ( (unsigned int)(v482 - 1) >= LODWORD(klass->_1.namespaze) )
        goto LABEL_379;
      v516 = &klass->_1.image + v515;
      v516[4] = v509;
      sub_B16F98(
        (BattleServantConfConponent_o *)(v516 + 4),
        (System_Int32_array **)v509,
        (System_String_array **)restrictionMessageId,
        v510,
        v511,
        v512,
        v513,
        v514);
      v461 = v735;
      servantNumMax = v735->fields.servantNumMax;
      if ( servantNumMax >= 1 && v515 >= servantNumMax )
      {
        v520 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_378;
        v521 = questIdb;
        if ( (unsigned int)v515 >= LODWORD(v520->_1.namespaze) )
          goto LABEL_379;
        v522 = *((_QWORD *)&v520->_1.byval_arg.data + v515);
        if ( !v522 )
          goto LABEL_378;
        *(_DWORD *)(v522 + 16) = 5;
        v523 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_378;
        if ( (unsigned int)v515 >= LODWORD(v523->_1.namespaze) )
          goto LABEL_379;
        v524 = *((_QWORD *)&v523->_1.byval_arg.data + v515);
        if ( !v524 )
          goto LABEL_378;
        *(_BYTE *)(v524 + 48) = 0;
        v462 = p_dialogMessageInfoDictionary;
        goto LABEL_251;
      }
      v525 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v525 = QuestRestrictionInfo___c_TypeInfo;
      }
      static_fields = v525->static_fields;
      _9__82_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__82_0;
      if ( !_9__82_0 )
      {
        if ( (BYTE3(v525->vtable._0_Equals.methodPtr) & 4) != 0 && !v525->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v525);
          static_fields = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v528 = (Il2CppObject *)static_fields->__9;
        _9__82_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_RestrictionSlotEntity__bool__TypeInfo,
                                                                                        v348,
                                                                                        restrictionMessageId,
                                                                                        v517,
                                                                                        v518);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_0,
          v528,
          Method_QuestRestrictionInfo___c__Setup_b__82_0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_RestrictionSlotEntity__bool___ctor__);
        v529 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v529->__9__82_0 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v529->__9__82_0,
          (System_Int32_array **)_9__82_0,
          v530,
          v531,
          v532,
          v533,
          v534,
          v535);
      }
      v540 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
               v487,
               (System_Func_T__bool__o *)_9__82_0,
               (const MethodInfo_18B6074 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      v541 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v541 = QuestRestrictionInfo___c_TypeInfo;
      }
      v542 = v541->static_fields;
      _9__82_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v542->__9__82_1;
      if ( !_9__82_1 )
      {
        if ( (BYTE3(v541->vtable._0_Equals.methodPtr) & 4) != 0 && !v541->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v541);
          v542 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v544 = (Il2CppObject *)v542->__9;
        _9__82_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_RestrictionSlotEntity__bool__TypeInfo,
                                                                                        v536,
                                                                                        v537,
                                                                                        v538,
                                                                                        v539);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_1,
          v544,
          Method_QuestRestrictionInfo___c__Setup_b__82_1__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_RestrictionSlotEntity__bool___ctor__);
        v545 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v545->__9__82_1 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v545->__9__82_1,
          (System_Int32_array **)_9__82_1,
          v546,
          v547,
          v548,
          v549,
          v550,
          v551);
      }
      v556 = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
               v487,
               (System_Func_T__bool__o *)_9__82_1,
               (const MethodInfo_18B6074 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      v557 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v557 = QuestRestrictionInfo___c_TypeInfo;
      }
      v558 = v557->static_fields;
      _9__82_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v558->__9__82_2;
      if ( !_9__82_2 )
      {
        v726 = v540;
        if ( (BYTE3(v557->vtable._0_Equals.methodPtr) & 4) != 0 && !v557->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v557);
          v558 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v560 = (Il2CppObject *)v558->__9;
        _9__82_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_RestrictionSlotEntity__bool__TypeInfo,
                                                                                        v552,
                                                                                        v553,
                                                                                        v554,
                                                                                        v555);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_2,
          v560,
          Method_QuestRestrictionInfo___c__Setup_b__82_2__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_RestrictionSlotEntity__bool___ctor__);
        v561 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v561->__9__82_2 = (struct System_Func_RestrictionSlotEntity__bool__o *)_9__82_2;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v561->__9__82_2,
          (System_Int32_array **)_9__82_2,
          v562,
          v563,
          v564,
          v565,
          v566,
          v567);
        v540 = v726;
      }
      GroupId = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                  v487,
                  (System_Func_T__bool__o *)_9__82_2,
                  (const MethodInfo_18B6074 *)Method_BasicHelper_Any_RestrictionSlotEntity___);
      if ( v556 || !v540 || (GroupId & 1) != 0 )
      {
        if ( (v540 || !v556) | GroupId & 1 )
        {
          if ( !v540 && !v556 && (((unsigned int)GroupId ^ 1) & 1) == 0 )
          {
            v572 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v515 >= LODWORD(v572->_1.namespaze) )
              goto LABEL_379;
            v573 = *((_QWORD *)&v572->_1.byval_arg.data + v515);
            if ( !v573 )
              goto LABEL_378;
            *(_DWORD *)(v573 + 16) = 2;
            v735->fields.supportInitIndex = v482;
            if ( !v503 )
              goto LABEL_378;
            goto LABEL_196;
          }
          if ( !(GroupId & 1 | (!v540 || !v556)) )
          {
            v624 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v515 >= LODWORD(v624->_1.namespaze) )
              goto LABEL_379;
            v625 = *((_QWORD *)&v624->_1.byval_arg.data + v515);
            if ( !v625 )
              goto LABEL_378;
            *(_DWORD *)(v625 + 16) = 3;
            v735->fields.isMyServantOrNpc = 1;
            if ( !v503 )
              goto LABEL_378;
            goto LABEL_196;
          }
          if ( ((v540 || v556) & (unsigned int)GroupId & 1) != 0 )
          {
            v622 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v515 >= LODWORD(v622->_1.namespaze) )
              goto LABEL_379;
            v623 = *((_QWORD *)&v622->_1.byval_arg.data + v515);
            if ( !v623 )
              goto LABEL_378;
            *(_DWORD *)(v623 + 16) = 4;
            v735->fields.isMyServantOrSupport = 1;
            if ( !v503 )
              goto LABEL_378;
            goto LABEL_196;
          }
        }
        else
        {
          v574 = p_fields->klass;
          if ( !p_fields->klass )
            goto LABEL_378;
          if ( (unsigned int)v515 >= LODWORD(v574->_1.namespaze) )
            goto LABEL_379;
          v575 = *((_QWORD *)&v574->_1.byval_arg.data + v515);
          if ( !v575 )
            goto LABEL_378;
          *(_DWORD *)(v575 + 16) = 1;
        }
        if ( !v503 )
          goto LABEL_378;
      }
      else
      {
        v570 = p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_378;
        if ( (unsigned int)v515 >= LODWORD(v570->_1.namespaze) )
          goto LABEL_379;
        v571 = *((_QWORD *)&v570->_1.byval_arg.data + v515);
        if ( !v571 )
          goto LABEL_378;
        *(_DWORD *)(v571 + 16) = 0;
        if ( !v503 )
          goto LABEL_378;
      }
LABEL_196:
      v576 = v503->max_length;
      if ( v576 >= 1 )
      {
        v577 = 0;
        while ( v577 < v576 )
        {
          v578 = v503->m_Items[v577];
          if ( !v578 )
            goto LABEL_378;
          if ( !v487->max_length )
            break;
          v579 = v487->m_Items[0];
          if ( !v579 )
            goto LABEL_378;
          if ( v578->fields.condType == LODWORD(v579[1].monitor) )
          {
            v580 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v515 >= LODWORD(v580->_1.namespaze) )
              goto LABEL_379;
            v581 = *((_QWORD *)&v580->_1.byval_arg.data + v515);
            if ( !v581 )
              goto LABEL_378;
            if ( *(_DWORD *)(v581 + 16) <= 2u )
            {
              monitor = (System_Array_o *)v578[1].monitor;
              if ( !monitor )
                goto LABEL_378;
              v583 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v581 + 24);
              v584 = System_Array__Clone(monitor, 0LL);
              if ( !v583 )
                goto LABEL_378;
              v585 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B170BC(v584, int___TypeInfo);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v583,
                v585,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_int____Add__);
              v586 = p_fields->klass;
              if ( !p_fields->klass )
                goto LABEL_378;
              if ( (unsigned int)v515 >= LODWORD(v586->_1.namespaze) )
                goto LABEL_379;
              v587 = *((_QWORD *)&v586->_1.byval_arg.data + v515);
              if ( !v587 )
                goto LABEL_378;
              v588 = *(System_Collections_Generic_List_VoiceCondType_Type__o **)(v587 + 32);
              if ( !v588 )
                goto LABEL_378;
              System_Collections_Generic_List_VoiceCondType_Type___Add(
                v588,
                v578[1].fields.condType,
                (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_Restriction_RangeType__Add__);
            }
            if ( LODWORD(v578[1].klass) == 2 )
            {
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              GroupId = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10361, 0LL);
              condValue = (System_String_o *)GroupId;
            }
            else
            {
              condValue = (System_String_o *)v578->fields.condValue;
            }
            v590 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v515 >= LODWORD(v590->_1.namespaze) )
              goto LABEL_379;
            v591 = *((_QWORD *)&v590->_1.byval_arg.data + v515);
            if ( !v591 )
              goto LABEL_378;
            GroupId = System_String__IsNullOrEmpty(*(System_String_o **)(v591 + 40), 0LL);
            v597 = p_fields->klass;
            if ( !p_fields->klass )
              goto LABEL_378;
            if ( (unsigned int)v515 >= LODWORD(v597->_1.namespaze) )
              goto LABEL_379;
            v598 = *((_QWORD *)&v597->_1.byval_arg.data + v515);
            if ( !v598 )
              goto LABEL_378;
            v599 = (System_String_o **)(v598 + 40);
            if ( (GroupId & 1) != 0 )
            {
              *v599 = condValue;
              v600 = (BattleServantConfConponent_o *)(v598 + 40);
              v601 = (System_Int32_array **)condValue;
            }
            else
            {
              v601 = (System_Int32_array **)System_String__Concat_43746016(
                                              *v599,
                                              (System_String_o *)StringLiteral_26,
                                              condValue,
                                              0LL);
              *v599 = (System_String_o *)v601;
              v600 = (BattleServantConfConponent_o *)v599;
            }
            sub_B16F98(v600, v601, (System_String_array **)restrictionMessageId, v592, v593, v594, v595, v596);
          }
          v576 = v503->max_length;
          if ( (int)++v577 >= v576 )
            goto LABEL_231;
        }
        goto LABEL_379;
      }
LABEL_231:
      v602 = p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_378;
      if ( (unsigned int)v515 >= LODWORD(v602->_1.namespaze) )
        goto LABEL_379;
      v603 = *((_QWORD *)&v602->_1.byval_arg.data + v515);
      v604 = QuestRestrictionInfo___c_TypeInfo;
      if ( (BYTE3(QuestRestrictionInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestRestrictionInfo___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestRestrictionInfo___c_TypeInfo);
        v604 = QuestRestrictionInfo___c_TypeInfo;
      }
      v605 = v604->static_fields;
      _9__82_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v605->__9__82_3;
      if ( !_9__82_3 )
      {
        if ( (BYTE3(v604->vtable._0_Equals.methodPtr) & 4) != 0 && !v604->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v604);
          v605 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        }
        v607 = (Il2CppObject *)v605->__9;
        _9__82_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_RestrictionSlotDetailEntity__bool__TypeInfo,
                                                                                        v348,
                                                                                        restrictionMessageId,
                                                                                        v568,
                                                                                        v569);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__82_3,
          v607,
          Method_QuestRestrictionInfo___c__Setup_b__82_3__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_RestrictionSlotDetailEntity__bool___ctor__);
        v608 = QuestRestrictionInfo___c_TypeInfo->static_fields;
        v608->__9__82_3 = (struct System_Func_RestrictionSlotDetailEntity__bool__o *)_9__82_3;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v608->__9__82_3,
          (System_Int32_array **)_9__82_3,
          v609,
          v610,
          v611,
          v612,
          v613,
          v614);
      }
      GroupId = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                  v503,
                  (System_Func_T__bool__o *)_9__82_3,
                  (const MethodInfo_18B6074 *)Method_BasicHelper_Any_RestrictionSlotDetailEntity___);
      if ( !v603 )
        goto LABEL_378;
      *(_BYTE *)(v603 + 48) = (GroupId & 1) == 0;
      v615 = p_fields->klass;
      if ( !p_fields->klass )
        goto LABEL_378;
      namespaze = (unsigned int)v615->_1.namespaze;
      v461 = v735;
      if ( v515 >= namespaze )
        goto LABEL_379;
      v617 = &v615->_1.image + v515;
      v620 = v617[4];
      v618 = (__int64 *)(v617 + 4);
      v619 = v620;
      if ( !v620 )
        goto LABEL_378;
      v462 = p_dialogMessageInfoDictionary;
      if ( v619[4] == 1 && *((_BYTE *)v619 + 48) )
      {
        v735->fields.isNpcEditablePos = 1;
        namespaze = (unsigned int)v615->_1.namespaze;
      }
      if ( v515 >= namespaze )
        goto LABEL_379;
      v621 = *v618;
      if ( !v621 )
        goto LABEL_378;
      v521 = questIdb;
      *(_BYTE *)(v621 + 49) = v487->max_length != 0;
LABEL_251:
      ++v482;
    }
    if ( !v736 )
      goto LABEL_378;
    v626 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v736,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_RestrictionMessageEntity__ToArray__);
    v461->fields.restrictionMessageEntities = (struct RestrictionMessageEntity_array *)v626;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v461->fields.restrictionMessageEntities,
      v626,
      v627,
      v628,
      v629,
      v630,
      v631,
      v632);
    slotInfos = v461->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_378;
    v634 = slotInfos->max_length;
    if ( v634 >= 1 )
    {
      v635 = 0;
      v636 = 0;
      v637 = 0;
      v638 = 0;
      while ( v635 < v634 )
      {
        v639 = slotInfos->m_Items[v635];
        if ( !v639 )
          goto LABEL_378;
        switch ( v639->fields.slotType )
        {
          case 0:
          case 3:
          case 4:
            ++v638;
            break;
          case 1:
            ++v637;
            break;
          case 2:
            ++v636;
            break;
          default:
            break;
        }
        if ( (int)++v635 >= v634 )
          goto LABEL_277;
      }
LABEL_379:
      sub_B17100(GroupId, v348, restrictionMessageId);
      sub_B170A0();
    }
    v638 = 0;
    v637 = 0;
    v636 = 0;
LABEL_277:
    if ( v636 == 0 && (i & 1) != 0 )
      v461->fields.isNoSupportBattle = 1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v640 = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    if ( !v640 )
      goto LABEL_378;
    GroupId = (__int64)NpcFollowerMaster__GetQuestFollowerList(v640, v461->fields.questId, v461->fields.questPhase, 0LL);
    if ( !GroupId )
      goto LABEL_378;
    v641 = *(_DWORD *)(GroupId + 24);
    if ( v641 < 1 )
    {
LABEL_290:
      v644 = 0;
    }
    else
    {
      v642 = 0;
      while ( 1 )
      {
        if ( v642 >= v641 )
          goto LABEL_379;
        v643 = *(_QWORD *)(GroupId + 8LL * (int)v642 + 32);
        if ( !v643 )
          goto LABEL_378;
        if ( *(_BYTE *)(v643 + 97) )
          break;
        if ( (int)++v642 >= v641 )
          goto LABEL_290;
      }
      v644 = 1;
    }
    if ( !v744 )
      goto LABEL_378;
    v645 = QuestEntity__HasFlag_23922108((QuestEntity_o *)v744, 0x10000000LL, questPhase, 0LL)
        || (v637 > 0) & (unsigned __int8)v644 & (v638 > 0);
    v461->fields.isNpcMultipleBattle = v645;
    if ( !v744 )
      goto LABEL_378;
    v646 = QuestEntity__HasFlag_23922108((QuestEntity_o *)v744, 0x20000000LL, questPhase, 0LL)
        || (v638 == 0) & (unsigned __int8)v644 & (v637 > 0);
    v647 = v461->fields.restrictionBaseEntity;
    v461->fields.isNpcOnlyBattle = v646;
    if ( !v647 )
      goto LABEL_378;
    if ( RestrictionBaseEntity__HasFlag(v647, 8LL, 0LL) )
    {
      Value_int__object = BasicHelper__GetValue_int__object_(
                            (System_Collections_Generic_Dictionary_K__V__o *)*p_restrictionSlotDictionary,
                            2,
                            0LL,
                            (const MethodInfo_18B7E58 *)Method_BasicHelper_GetValue_int__RestrictionSlotEntity_____);
      if ( Value_int__object && Value_int__object[1].monitor )
        v649 = 2;
      else
        v649 = 1;
      DeckMemberMax = v461->fields.servantNumMax;
      v461->fields.servantNumMin = v649;
      if ( !DeckMemberMax )
      {
        v651 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v651 = BalanceConfig_TypeInfo;
        }
        DeckMemberMax = v651->static_fields->DeckMemberMax;
        v461->fields.servantNumMax = DeckMemberMax;
      }
    }
    else
    {
      DeckMemberMax = v461->fields.servantNumMax;
    }
    if ( DeckMemberMax < 1 )
    {
      if ( v461->fields.isNpcMultipleBattle )
        v461->fields.myServantNumMax = v638;
      goto LABEL_324;
    }
    v461->fields.myServantNumMax = v638;
    if ( v638 == 1 && DeckMemberMax == 1 )
    {
      restrictionSlotDetailDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v461->fields.restrictionSlotDetailDictionary;
      v461->fields.isFixedMyServantSingle = 1;
      if ( restrictionSlotDetailDictionary )
      {
        GroupId = (__int64)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                             restrictionSlotDetailDictionary,
                             1,
                             (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotDetailEntity____get_Item__);
        if ( !GroupId )
          goto LABEL_324;
        v653 = *(_QWORD *)(GroupId + 24);
        if ( !v653 )
          goto LABEL_324;
        if ( !(_DWORD)v653 )
          goto LABEL_379;
        v654 = *(_QWORD *)(GroupId + 32);
        if ( v654 )
        {
          v655 = *(System_Array_o **)(v654 + 40);
          if ( v655 )
          {
            v656 = System_Array__Clone(v655, 0LL);
            v657 = (System_Int32_array **)sub_B170BC(v656, int___TypeInfo);
            v461->fields.fixedMyServantSingleIndividualities = (struct System_Int32_array *)v657;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v461->fields.fixedMyServantSingleIndividualities,
              v657,
              v658,
              v659,
              v660,
              v661,
              v662,
              v663);
            goto LABEL_324;
          }
        }
      }
      goto LABEL_378;
    }
LABEL_324:
    if ( !*p_restrictionSlotDictionary )
      goto LABEL_378;
    Count = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
              (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)*p_restrictionSlotDictionary,
              (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Count__);
    restrictionSlotDictionary = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v461->fields.restrictionSlotDictionary;
    v461->fields.isSupportOnly = Count > 0;
    if ( !restrictionSlotDictionary )
      goto LABEL_378;
    Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
               restrictionSlotDictionary,
               (const MethodInfo_2DE9160 *)Method_System_Collections_Generic_Dictionary_int__RestrictionSlotEntity____get_Values__);
    if ( !Values )
      goto LABEL_378;
    System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
      &v737,
      Values,
      (const MethodInfo_227BDC0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RestrictionSlotEntity____GetEnumerator__);
    v740 = v737;
    do
    {
      v667 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
               &v740,
               (const MethodInfo_27297EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____MoveNext__);
      if ( !v667 )
        break;
      if ( !v740.fields.currentValue )
        sub_B170D4();
      v670 = (int)v740.fields.currentValue[1].monitor;
      if ( v670 >= 1 )
      {
        v671 = 0;
        while ( 1 )
        {
          if ( v671 >= v670 )
          {
            sub_B17100(v667, v668, v669);
            sub_B170A0();
          }
          v672 = *((_QWORD *)&v740.fields.currentValue[2].klass + (int)v671);
          if ( !v672 )
            sub_B170D4();
          if ( *(_DWORD *)(v672 + 28) == 1 )
            break;
          if ( (int)++v671 >= v670 )
            goto LABEL_336;
        }
        v461->fields.isSupportOnly = 0;
        break;
      }
LABEL_336:
      ;
    }
    while ( v461->fields.isSupportOnly );
    v738 = 3158;
    v739 = 1;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
      &v740,
      (const MethodInfo_27297E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RestrictionSlotEntity____Dispose__);
    if ( v738 == 3158 )
      v739 = 0;
    v677 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v673, v674, v675, v676);
    System_Text_StringBuilder___ctor(v677, 0LL);
    v682 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v678, v679, v680, v681);
    System_Text_StringBuilder___ctor(v682, 0LL);
    v683 = *v708;
    if ( !*v708 )
      goto LABEL_378;
    v684 = v683->max_length;
    if ( v684 >= 1 )
    {
      v685 = 0;
      while ( 1 )
      {
        if ( v685 >= v684 )
          goto LABEL_379;
        v686 = v683->m_Items[v685];
        if ( !v686 )
          goto LABEL_378;
        GroupId = System_String__IsNullOrEmpty(v686->fields.summary, 0LL);
        if ( (GroupId & 1) == 0 )
          break;
LABEL_367:
        v684 = v683->max_length;
        if ( (int)++v685 >= v684 )
          goto LABEL_368;
      }
      type = v686->fields.type;
      if ( type == 10 || type == 2 )
      {
        v689 = 1;
      }
      else
      {
        if ( type == 1 )
        {
          targetVals2 = v686->fields.targetVals2;
          if ( !targetVals2 )
            goto LABEL_378;
          v689 = 1;
          v690 = targetVals2->max_length == 1;
LABEL_355:
          if ( (v690 & v689) != 0 )
          {
            if ( v461->fields.isRestriction )
            {
              if ( !v682 )
                goto LABEL_378;
              System_Text_StringBuilder__Append_41914240(v682, (System_String_o *)StringLiteral_26, 0LL);
            }
            else if ( !v682 )
            {
              goto LABEL_378;
            }
            GroupId = (__int64)System_Text_StringBuilder__Append_41914240(v682, v686->fields.summary, 0LL);
            v461->fields.isRestriction = 1;
          }
          if ( v689 )
          {
            if ( v461->fields.isRestriction )
            {
              if ( !v677 )
                goto LABEL_378;
              System_Text_StringBuilder__Append_41914240(v677, (System_String_o *)StringLiteral_26, 0LL);
            }
            else if ( !v677 )
            {
              goto LABEL_378;
            }
            GroupId = (__int64)System_Text_StringBuilder__Append_41914240(v677, v686->fields.summary, 0LL);
            v461->fields.isRestriction = 1;
          }
          goto LABEL_367;
        }
        v689 = 0;
      }
      v690 = 1;
      goto LABEL_355;
    }
LABEL_368:
    if ( !v682 )
      goto LABEL_378;
    if ( System_Text_StringBuilder__get_Length(v682, 0LL) >= 1 )
    {
      v691 = (System_Int32_array **)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v682->klass->vtable._3_ToString.method)(
                                      v682,
                                      v682->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      p_confirmRestrictionMessage->klass = (BattleServantConfConponent_c *)v691;
      sub_B16F98(p_confirmRestrictionMessage, v691, v692, v693, v694, v695, v696, v697);
    }
    if ( !v677 )
      goto LABEL_378;
    if ( System_Text_StringBuilder__get_Length(v677, 0LL) >= 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v698 = LocalizationManager__Get((System_String_o *)StringLiteral_10330, 0LL);
      v699 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v677->klass->vtable._3_ToString.method)(
                                  v677,
                                  v677->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v700 = (System_Int32_array **)System_String__Concat_43746016(v698, (System_String_o *)StringLiteral_26, v699, 0LL);
      p_restrictionMessage->klass = (BattleServantConfConponent_c *)v700;
      sub_B16F98(p_restrictionMessage, v700, v701, v702, v703, v704, v705, v706);
    }
  }
  else
  {
    QuestRestrictionInfo__SetupOldRestriction(this, v285);
  }
}


void __fastcall QuestRestrictionInfo__SetupOldRestriction(QuestRestrictionInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Text_StringBuilder_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Text_StringBuilder_o *v25; // x0
  System_Text_StringBuilder_o *appended; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct RestrictionEntity_array *restrictionEntityList; // x23
  int max_length; // w8
  unsigned int v36; // w28
  RestrictionEntity_o *v37; // x24
  System_Array_o *v38; // x0
  Il2CppObject *v39; // x0
  struct System_Int32_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x2
  BalanceConfig_c *v48; // x0
  struct System_Int32_array *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x2
  struct System_Int32_array *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x2
  struct System_Int32_array *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct System_Boolean_array *DeckPositionList; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct System_Collections_Generic_List_RestrictionEntity__o *v79; // x0
  System_Collections_Generic_List_int__o *v80; // x21
  int32_t v81; // w0
  struct System_Int32_array *v82; // x8
  _BOOL4 isRestriction; // w9
  __int64 v84; // x2
  BalanceConfig_c *v85; // x0
  struct System_Int32_array *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  struct System_Int32_array *targetVals; // x8
  struct System_Int32_array *v94; // x8
  int32_t v95; // w8
  struct System_Int32_array *v96; // x8
  __int64 v97; // x9
  struct System_Collections_Generic_List_RestrictionEntity__o *myServantOrNpcRestrictionEntityList; // x0
  System_Collections_Generic_List_int__o *specifiedPositionList; // x21
  int32_t SpecifiedPosition; // w0
  __int64 v101; // x9
  struct System_String_o *v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_String_o *v109; // x0
  struct System_String_o *v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v119; // x0
  QuestPhaseMaster_o *v120; // x0
  const MethodInfo *v121; // x4
  __int64 v122; // x20
  __int64 v123; // x20
  DataManager_o *v124; // x0
  QuestRestrictionInfoMaster_o *v125; // x0
  const MethodInfo *v126; // x4
  const MethodInfo *v127; // x1
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  MethodInfo *v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  QuestRestrictionInfoEntity_o *v134; // x0
  int64_t v135; // x10
  int64_t v136; // x8
  __int64 v137; // x0
  const MethodInfo *v138; // x1
  struct System_Int32_array *v139; // x20
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  int64_t flag; // x8
  WebViewManager_o *v146; // x0
  QuestGroupMaster_o *v147; // x0
  bool HasFlag_23922108; // w0
  bool v149; // w0
  __int64 v150; // x2
  __int64 v151; // x0
  struct System_Int32_array *v152; // x20
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  bool v158; // w0
  WebViewManager_o *v159; // x0
  QuestGroupMaster_o *v160; // x0
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  BattleServantConfConponent_o *p_uniqueIndividualityEntity; // [xsp+18h] [xbp-C8h]
  BattleServantConfConponent_o *p_myServantNumRestrictionEntity; // [xsp+28h] [xbp-B8h]
  BattleServantConfConponent_o *p_servantNumRestrictionEntity; // [xsp+30h] [xbp-B0h]
  BattleServantConfConponent_o *p_uniqueSvtRestrictionEntity; // [xsp+58h] [xbp-88h]
  BattleServantConfConponent_o *p_totalCostRestrictionEntity; // [xsp+68h] [xbp-78h]
  struct System_Int32_array **p_deckSvtIdList; // [xsp+70h] [xbp-70h]
  QuestRestrictionInfoEntity_o *v179; // [xsp+78h] [xbp-68h] BYREF
  QuestPhaseEntity_o *v180; // [xsp+80h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_40FD589 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&int___TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_26, v18);
    sub_B16FFC(&StringLiteral_10330, v19);
    byte_40FD589 = 1;
  }
  v180 = 0LL;
  entity = 0LL;
  v179 = 0LL;
  v20 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, method, v2, v3, v4);
  System_Text_StringBuilder___ctor(v20, 0LL);
  v25 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v21, v22, v23, v24);
  System_Text_StringBuilder___ctor(v25, 0LL);
  restrictionEntityList = this->fields.restrictionEntityList;
  if ( !restrictionEntityList )
    goto LABEL_127;
  max_length = restrictionEntityList->max_length;
  if ( max_length >= 1 )
  {
    p_totalCostRestrictionEntity = (BattleServantConfConponent_o *)&this->fields.totalCostRestrictionEntity;
    p_uniqueSvtRestrictionEntity = (BattleServantConfConponent_o *)&this->fields.uniqueSvtRestrictionEntity;
    p_servantNumRestrictionEntity = (BattleServantConfConponent_o *)&this->fields.servantNumRestrictionEntity;
    p_myServantNumRestrictionEntity = (BattleServantConfConponent_o *)&this->fields.myServantNumRestrictionEntity;
    p_uniqueIndividualityEntity = (BattleServantConfConponent_o *)&this->fields.uniqueIndividualityEntity;
    p_deckSvtIdList = &this->fields.deckSvtIdList;
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= max_length )
        goto LABEL_128;
      v37 = restrictionEntityList->m_Items[v36];
      if ( !v37 )
        goto LABEL_127;
      switch ( v37->fields.type )
      {
        case 3:
          p_totalCostRestrictionEntity->klass = (BattleServantConfConponent_c *)v37;
          sub_B16F98(p_totalCostRestrictionEntity, (System_Int32_array **)v37, v28, v29, v30, v31, v32, v33);
          goto LABEL_53;
        case 5:
          this->fields.supportOnlyRestrictionEntity = v37;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.supportOnlyRestrictionEntity,
            (System_Int32_array **)v37,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          this->fields.isSupportOnly = 1;
          goto LABEL_53;
        case 6:
          p_uniqueSvtRestrictionEntity->klass = (BattleServantConfConponent_c *)v37;
          sub_B16F98(p_uniqueSvtRestrictionEntity, (System_Int32_array **)v37, v28, v29, v30, v31, v32, v33);
          v85 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v85 = BalanceConfig_TypeInfo;
          }
          v86 = (struct System_Int32_array *)sub_B17014(
                                               int___TypeInfo,
                                               (unsigned int)v85->static_fields->DeckMemberMax,
                                               v84);
          this->fields.deckSvtIdList = v86;
          sub_B16F98(
            (BattleServantConfConponent_o *)p_deckSvtIdList,
            (System_Int32_array **)v86,
            v87,
            v88,
            v89,
            v90,
            v91,
            v92);
          this->fields.isUniqueServant = 1;
          goto LABEL_53;
        case 7:
          this->fields.fixedSupportPositionRestrictionEntity = v37;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.fixedSupportPositionRestrictionEntity,
            (System_Int32_array **)v37,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          DeckPositionList = RestrictionEntity__getDeckPositionList(v37, 0LL);
          this->fields.supportPositionList = DeckPositionList;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.supportPositionList,
            (System_Int32_array **)DeckPositionList,
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
          this->fields.isFixedSupportPosition = 1;
          goto LABEL_53;
        case 8:
          this->fields.fixedMyServantPositionRestrictionEntity = v37;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.fixedMyServantPositionRestrictionEntity,
            (System_Int32_array **)v37,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          this->fields.isFixedMyServantPosition = 1;
          goto LABEL_53;
        case 9:
          this->fields.fixedMyServantSingleRestrictionEntity = v37;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.fixedMyServantSingleRestrictionEntity,
            (System_Int32_array **)v37,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          this->fields.isFixedMyServantSingle = 1;
          goto LABEL_53;
        case 0xA:
          p_servantNumRestrictionEntity->klass = (BattleServantConfConponent_c *)v37;
          sub_B16F98(p_servantNumRestrictionEntity, (System_Int32_array **)v37, v28, v29, v30, v31, v32, v33);
          targetVals = v37->fields.targetVals;
          if ( v37->fields.rangeType == 5 )
          {
            if ( !targetVals || (int)targetVals->max_length < 2 )
              goto LABEL_53;
            this->fields.servantNumMin = targetVals->m_Items[1];
            v94 = v37->fields.targetVals;
            if ( !v94 )
              goto LABEL_127;
            if ( v94->max_length <= 1 )
              goto LABEL_128;
            v95 = v94->m_Items[2];
          }
          else
          {
            if ( !targetVals )
              goto LABEL_53;
            v101 = *(_QWORD *)&targetVals->max_length;
            if ( !v101 )
              goto LABEL_53;
            if ( !(_DWORD)v101 )
              goto LABEL_128;
            v95 = targetVals->m_Items[1];
          }
          this->fields.servantNumMax = v95;
LABEL_53:
          max_length = restrictionEntityList->max_length;
          if ( (int)++v36 >= max_length )
            goto LABEL_54;
          break;
        case 0xB:
          p_myServantNumRestrictionEntity->klass = (BattleServantConfConponent_c *)v37;
          sub_B16F98(p_myServantNumRestrictionEntity, (System_Int32_array **)v37, v28, v29, v30, v31, v32, v33);
          v96 = v37->fields.targetVals;
          if ( !v96 )
            goto LABEL_53;
          v97 = *(_QWORD *)&v96->max_length;
          if ( !v97 )
            goto LABEL_53;
          if ( !(_DWORD)v97 )
            goto LABEL_128;
          this->fields.myServantNumMax = v96->m_Items[1];
          goto LABEL_53;
        case 0xC:
          myServantOrNpcRestrictionEntityList = this->fields.myServantOrNpcRestrictionEntityList;
          if ( !myServantOrNpcRestrictionEntityList )
            goto LABEL_127;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)myServantOrNpcRestrictionEntityList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
          specifiedPositionList = this->fields.specifiedPositionList;
          SpecifiedPosition = RestrictionEntity__GetSpecifiedPosition(v37, 0LL);
          if ( !specifiedPositionList )
            goto LABEL_127;
          System_Collections_Generic_List_int___Add(
            specifiedPositionList,
            SpecifiedPosition,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          this->fields.isMyServantOrNpc = 1;
          goto LABEL_53;
        case 0xE:
          this->fields.fixedServantPositionRestrictionEntity = v37;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.fixedServantPositionRestrictionEntity,
            (System_Int32_array **)v37,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          this->fields.isNeedStarting = 1;
          goto LABEL_53;
        case 0xF:
          p_uniqueIndividualityEntity->klass = (BattleServantConfConponent_c *)v37;
          sub_B16F98(p_uniqueIndividualityEntity, (System_Int32_array **)v37, v28, v29, v30, v31, v32, v33);
          v38 = (System_Array_o *)v37->fields.targetVals;
          if ( !v38 )
            goto LABEL_127;
          v39 = System_Array__Clone(v38, 0LL);
          v40 = (struct System_Int32_array *)sub_B170BC(v39, int___TypeInfo);
          this->fields.uniqueIndividualitys = v40;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.uniqueIndividualitys,
            (System_Int32_array **)v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46);
          v48 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v48 = BalanceConfig_TypeInfo;
          }
          v49 = (struct System_Int32_array *)sub_B17014(
                                               int___TypeInfo,
                                               (unsigned int)v48->static_fields->DeckMemberMax,
                                               v47);
          this->fields.deckSvtIdList = v49;
          sub_B16F98(
            (BattleServantConfConponent_o *)p_deckSvtIdList,
            (System_Int32_array **)v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55);
          v57 = (struct System_Int32_array *)sub_B17014(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax,
                                               v56);
          this->fields.deckLimitCountList = v57;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.deckLimitCountList,
            (System_Int32_array **)v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63);
          v65 = (struct System_Int32_array *)sub_B17014(
                                               int___TypeInfo,
                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->DeckMemberMax,
                                               v64);
          this->fields.deckDispLimitCountList = v65;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.deckDispLimitCountList,
            (System_Int32_array **)v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71);
          this->fields.isUniqueIndividuality = 1;
          goto LABEL_53;
        case 0x10:
          v79 = this->fields.myServantOrNpcRestrictionEntityList;
          if ( !v79 )
            goto LABEL_127;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v79,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
          v80 = this->fields.specifiedPositionList;
          v81 = RestrictionEntity__GetSpecifiedPosition(v37, 0LL);
          if ( !v80 )
            goto LABEL_127;
          System_Collections_Generic_List_int___Add(
            v80,
            v81,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          this->fields.isMyServantOrSupport = 1;
          goto LABEL_53;
        case 0x11:
          this->fields.isDataLostBattle = 1;
          v82 = v37->fields.targetVals;
          if ( !v82 )
            goto LABEL_127;
          if ( !v82->max_length )
            goto LABEL_128;
          isRestriction = this->fields.isRestriction;
          this->fields.dataLostBattleId = v82->m_Items[1];
          if ( isRestriction )
          {
LABEL_24:
            if ( !v20 )
              goto LABEL_127;
            System_Text_StringBuilder__Append_41914240(v20, (System_String_o *)StringLiteral_26, 0LL);
          }
          else
          {
LABEL_27:
            if ( !v20 )
              goto LABEL_127;
          }
          appended = System_Text_StringBuilder__Append_41914240(v20, v37->fields.name, 0LL);
          this->fields.isRestriction = 1;
          goto LABEL_53;
        default:
          if ( !this->fields.isRestriction )
            goto LABEL_27;
          goto LABEL_24;
      }
    }
  }
LABEL_54:
  if ( this->fields.isRestriction )
  {
    if ( !v20 )
      goto LABEL_127;
    v102 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v20->klass->vtable._3_ToString.method)(
                                       v20,
                                       v20->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    this->fields.confirmRestrictionMessage = v102;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.confirmRestrictionMessage,
      (System_Int32_array **)v102,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v109 = LocalizationManager__Get((System_String_o *)StringLiteral_10330, 0LL);
    v110 = System_String__Concat_43746016(
             v109,
             (System_String_o *)StringLiteral_26,
             this->fields.confirmRestrictionMessage,
             0LL);
    this->fields.restrictionMessage = v110;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.restrictionMessage,
      (System_Int32_array **)v110,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_127;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_127;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    this->fields.questId,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
  v119 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v119 )
    goto LABEL_127;
  v120 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v119,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !v120 )
    goto LABEL_127;
  QuestPhaseMaster__TryGetEntity(v120, &v180, this->fields.questId, this->fields.questPhase, v121);
  v122 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v122 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v123 = **(_QWORD **)(v122 + 192);
  if ( (*(_BYTE *)(v123 + 306) & 1) == 0 )
    sub_AAFCFC(v123);
  v124 = **(DataManager_o ***)(v123 + 184);
  if ( !v124 )
    goto LABEL_127;
  v125 = (QuestRestrictionInfoMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           v124,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
  if ( !v125 )
    goto LABEL_127;
  if ( QuestRestrictionInfoMaster__TryGetEntity(v125, &v179, this->fields.questId, this->fields.questPhase, v126) )
  {
    v134 = v179;
    if ( !v179 )
      goto LABEL_127;
    v135 = v179->fields.flag & 0x400000000100000LL;
    this->fields.isNoSupportBattle = v135 != 0;
    if ( v135 || (v136 = v134->fields.flag, this->fields.isSupportOnlyForceBattle = (v136 & 0x80000) != 0) )
    {
LABEL_80:
      this->fields.isNpcMultipleBattle = (v134->fields.flag & 0x10000000) != 0;
      this->fields.isNpcOnlyBattle = (v134->fields.flag & 0x20000000) != 0;
      this->fields.isNpcEditablePos = (v134->fields.flag & 0x800000000LL) != 0;
      this->fields.isNotTransitionSupportList = (v134->fields.flag & 0x80000000000000LL) != 0;
      QuestRestrictionInfoEntity__GetOverwriteLimitCountSvtIds(
        v134,
        &this->fields.overwriteLimitCountSvtIds,
        &this->fields.overwriteLimitCounts,
        &this->fields.overwriteLimitCountIconIds,
        v130);
      if ( !v179 )
        goto LABEL_127;
      flag = v179->fields.flag;
      this->fields.isAllOutBattle = (flag & 0x400000000000000LL) != 0;
      if ( (flag & 0x400000000000000LL) != 0 )
      {
        v146 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v146 )
          goto LABEL_127;
        v147 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)v146,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
        if ( !v147 )
          goto LABEL_127;
        this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(v147, this->fields.questId, 17, 0LL);
      }
      if ( entity )
        this->fields.isFatigure = QuestEntity__HasFlag_23922108(
                                    (QuestEntity_o *)entity,
                                    0x200000LL,
                                    this->fields.questPhase,
                                    0LL);
      if ( v180 )
      {
        this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v180, 0LL);
        if ( !v180 )
          goto LABEL_127;
        this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v180, 0LL);
      }
      else
      {
        this->fields.correctionIconId = -1;
      }
      if ( v179 )
      {
        this->fields.isNotSingleSupportOnly = (v179->fields.flag & 0x1000000000000000LL) != 0;
        return;
      }
LABEL_127:
      sub_B170D4();
    }
    if ( (v134->fields.flag & 0x1000000) != 0 )
      this->fields.eventDeckNum = QuestRestrictionInfoEntity__GetUserEventDeckNo(v134, v127);
    v137 = sub_B17014(int___TypeInfo, 1LL, v128);
    if ( !v179 )
      goto LABEL_127;
    v139 = (struct System_Int32_array *)v137;
    appended = (System_Text_StringBuilder_o *)QuestRestrictionInfoEntity__GetSingleForceSvtId(v179, v138);
    if ( !v139 )
      goto LABEL_127;
    if ( v139->max_length )
    {
      v139->m_Items[1] = (int)appended;
      this->fields.svtIdForceBattleList = v139;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList,
        (System_Int32_array **)v139,
        v28,
        v140,
        v141,
        v142,
        v143,
        v144);
      v134 = v179;
      if ( !v179 )
        goto LABEL_127;
      goto LABEL_80;
    }
LABEL_128:
    sub_B17100(appended, v27, v28);
    sub_B170A0();
  }
  if ( entity )
  {
    if ( QuestEntity__HasFlag_23922108((QuestEntity_o *)entity, 0x100000LL, this->fields.questPhase, 0LL) )
    {
      this->fields.isNoSupportBattle = 1;
    }
    else
    {
      if ( !entity )
        goto LABEL_127;
      HasFlag_23922108 = QuestEntity__HasFlag_23922108(
                           (QuestEntity_o *)entity,
                           0x400000000000000LL,
                           this->fields.questPhase,
                           0LL);
      this->fields.isNoSupportBattle = HasFlag_23922108;
      if ( !HasFlag_23922108 )
      {
        if ( !entity )
          goto LABEL_127;
        v149 = QuestEntity__HasFlag_23922108((QuestEntity_o *)entity, 0x80000LL, this->fields.questPhase, 0LL);
        this->fields.isSupportOnlyForceBattle = v149;
        if ( !v149 )
        {
          if ( v180 )
          {
            if ( !entity )
              goto LABEL_127;
            if ( QuestEntity__HasFlag_23922108((QuestEntity_o *)entity, 0x1000000LL, this->fields.questPhase, 0LL) )
            {
              if ( !v180 )
                goto LABEL_127;
              this->fields.eventDeckNum = QuestPhaseEntity__GetUserEventDeckNo(v180, 0LL);
            }
            v151 = sub_B17014(int___TypeInfo, 1LL, v150);
            if ( !v180 )
              goto LABEL_127;
            v152 = (struct System_Int32_array *)v151;
            appended = (System_Text_StringBuilder_o *)QuestPhaseEntity__GetSingleForceSvtId(v180, 0LL);
            if ( !v152 )
              goto LABEL_127;
            if ( !v152->max_length )
              goto LABEL_128;
            v152->m_Items[1] = (int)appended;
            this->fields.svtIdForceBattleList = v152;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.svtIdForceBattleList,
              (System_Int32_array **)v152,
              v28,
              v153,
              v154,
              v155,
              v156,
              v157);
          }
        }
      }
    }
    if ( !entity )
      goto LABEL_127;
    this->fields.isFatigure = QuestEntity__HasFlag_23922108(
                                (QuestEntity_o *)entity,
                                0x200000LL,
                                this->fields.questPhase,
                                0LL);
    if ( !entity )
      goto LABEL_127;
    v158 = QuestEntity__HasFlag_23922108((QuestEntity_o *)entity, 0x400000000000000LL, this->fields.questPhase, 0LL);
    this->fields.isAllOutBattle = v158;
    if ( v158 )
    {
      v159 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v159 )
        goto LABEL_127;
      v160 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v159,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
      if ( !v160 )
        goto LABEL_127;
      this->fields.allOutBattleGroupNo = QuestGroupMaster__GetGroupId(v160, this->fields.questId, 17, 0LL);
    }
    if ( !entity )
      goto LABEL_127;
    this->fields.isNpcMultipleBattle = QuestEntity__HasFlag_23922108(
                                         (QuestEntity_o *)entity,
                                         0x10000000LL,
                                         this->fields.questPhase,
                                         0LL);
    if ( !entity )
      goto LABEL_127;
    this->fields.isNpcOnlyBattle = QuestEntity__HasFlag_23922108(
                                     (QuestEntity_o *)entity,
                                     0x20000000LL,
                                     this->fields.questPhase,
                                     0LL);
    if ( !entity )
      goto LABEL_127;
    this->fields.isNpcEditablePos = QuestEntity__HasFlag_23922108(
                                      (QuestEntity_o *)entity,
                                      0x800000000LL,
                                      this->fields.questPhase,
                                      0LL);
    if ( !entity )
      goto LABEL_127;
    this->fields.isNotTransitionSupportList = QuestEntity__HasFlag_23922108(
                                                (QuestEntity_o *)entity,
                                                0x80000000000000LL,
                                                this->fields.questPhase,
                                                0LL);
    if ( !entity )
      goto LABEL_127;
    this->fields.isNotSingleSupportOnly = QuestEntity__HasFlag_23922108(
                                            (QuestEntity_o *)entity,
                                            0x1000000000000000LL,
                                            this->fields.questPhase,
                                            0LL);
  }
  if ( v180 )
  {
    this->fields.correctionIconId = QuestPhaseEntity__GetCorrectionIconId(v180, 0LL);
    if ( !v180 )
      goto LABEL_127;
    QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
      v180,
      &this->fields.overwriteLimitCountSvtIds,
      &this->fields.overwriteLimitCounts,
      &this->fields.overwriteLimitCountIconIds,
      0LL);
    if ( !v180 )
      goto LABEL_127;
    this->fields.supportInitIndex = QuestPhaseEntity__GetSupportInitDeckIndex(v180, 0LL);
  }
  else
  {
    this->fields.correctionIconId = -1;
    this->fields.overwriteLimitCountSvtIds = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.overwriteLimitCountSvtIds,
      0LL,
      v128,
      v129,
      (System_Boolean_array **)v130,
      v131,
      v132,
      v133);
    this->fields.overwriteLimitCounts = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.overwriteLimitCounts,
      0LL,
      v161,
      v162,
      v163,
      v164,
      v165,
      v166);
    this->fields.overwriteLimitCountIconIds = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.overwriteLimitCountIconIds,
      0LL,
      v167,
      v168,
      v169,
      v170,
      v171,
      v172);
  }
}


void __fastcall QuestRestrictionInfo_DialogMessageInfo___ctor(
        QuestRestrictionInfo_DialogMessageInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields = 0LL;
}


void __fastcall QuestRestrictionInfo_SlotInfo___ctor(QuestRestrictionInfo_SlotInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_40FA31C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int_____ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Restriction_RangeType___ctor__, v3);
    sub_B16FFC(&System_Collections_Generic_List_int____TypeInfo, v4);
    sub_B16FFC(&System_Collections_Generic_List_Restriction_RangeType__TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40FA31C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.slotType = 0;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_int____TypeInfo,
                                                                                                  v7,
                                                                                                  v8,
                                                                                                  v9,
                                                                                                  v10);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.individualityList = (struct System_Collections_Generic_List_int____o *)v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.individualityList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v22 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_Restriction_RangeType__TypeInfo,
                                                                   v18,
                                                                   v19,
                                                                   v20,
                                                                   v21);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v22,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_Restriction_RangeType___ctor__);
  this->fields.rangeTypeList = (struct System_Collections_Generic_List_Restriction_RangeType__o *)v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rangeTypeList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Int32_array **)StringLiteral_1;
  this->fields.summary = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.summary, v29, v30, v31, v32, v33, v34, v35);
  *(_WORD *)&this->fields.isMoved = 1;
}


void __fastcall QuestRestrictionInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA31B & 1) == 0 )
  {
    sub_B16FFC(&QuestRestrictionInfo___c_TypeInfo, v1);
    byte_40FA31B = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(QuestRestrictionInfo___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRestrictionInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall QuestRestrictionInfo___c___ctor(QuestRestrictionInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_0(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.type == 1;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_1(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.type == 3;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_2(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.type == 2;
}


bool __fastcall QuestRestrictionInfo___c___Setup_b__82_3(
        QuestRestrictionInfo___c_o *this,
        RestrictionSlotDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.type == 2;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass167_0___ctor(
        QuestRestrictionInfo___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass167_0___IsMyServantOrNpcRestriction_b__0(
        QuestRestrictionInfo___c__DisplayClass167_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass168_0___ctor(
        QuestRestrictionInfo___c__DisplayClass168_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass168_0___IsSelectableNormalSupport_b__0(
        QuestRestrictionInfo___c__DisplayClass168_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass169_0___ctor(
        QuestRestrictionInfo___c__DisplayClass169_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass169_0___IsNotIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass169_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass170_0___ctor(
        QuestRestrictionInfo___c__DisplayClass170_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass170_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass170_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass171_0___ctor(
        QuestRestrictionInfo___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass171_0___IsRestrictionServantIndividuality_b__0(
        QuestRestrictionInfo___c__DisplayClass171_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.pos;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass172_0___ctor(
        QuestRestrictionInfo___c__DisplayClass172_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass172_0___GetRestrictedName_b__0(
        QuestRestrictionInfo___c__DisplayClass172_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionEntity_o *questRestrictionEntity; // x8

  if ( !x || (questRestrictionEntity = this->fields.questRestrictionEntity) == 0LL )
    sub_B170D4();
  return x->fields.id == questRestrictionEntity->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass175_0___ctor(
        QuestRestrictionInfo___c__DisplayClass175_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass175_0___GetMyServantOrNpcSvtIdList_b__0(
        QuestRestrictionInfo___c__DisplayClass175_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *_4__this; // x8
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  __int64 index; // x9
  QuestRestrictionEntity_o *v6; // x8

  if ( !x )
    goto LABEL_7;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_7;
  questRestrictionEntityList = _4__this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_7;
  index = this->fields.index;
  if ( (unsigned int)index >= questRestrictionEntityList->max_length )
  {
    sub_B17100(this, x, method);
    sub_B170A0();
  }
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_B170D4();
  return x->fields.id == v6->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass176_0___ctor(
        QuestRestrictionInfo___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass176_0___GetMyServantOrSupportTargetPos_b__0(
        QuestRestrictionInfo___c__DisplayClass176_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *_4__this; // x8
  struct QuestRestrictionEntity_array *questRestrictionEntityList; // x8
  __int64 index; // x9
  QuestRestrictionEntity_o *v6; // x8

  if ( !x )
    goto LABEL_7;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_7;
  questRestrictionEntityList = _4__this->fields.questRestrictionEntityList;
  if ( !questRestrictionEntityList )
    goto LABEL_7;
  index = this->fields.index;
  if ( (unsigned int)index >= questRestrictionEntityList->max_length )
  {
    sub_B17100(this, x, method);
    sub_B170A0();
  }
  v6 = questRestrictionEntityList->m_Items[index];
  if ( !v6 )
LABEL_7:
    sub_B170D4();
  return x->fields.id == v6->fields.restrictionId;
}


void __fastcall QuestRestrictionInfo___c__DisplayClass189_0___ctor(
        QuestRestrictionInfo___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestRestrictionInfo___c__DisplayClass189_0___GetMyServantOrNpcSvtIdUnionNpcList_b__0(
        QuestRestrictionInfo___c__DisplayClass189_0_o *this,
        RestrictionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return RestrictionEntity__GetSpecifiedPosition(x, 0LL) == this->fields.index;
}