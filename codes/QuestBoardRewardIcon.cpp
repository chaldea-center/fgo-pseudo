void QuestBoardRewardIcon_RewardIconArgs___ctor(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        int32_t giftIconId,
        int32_t giftId,
        bool isDisplayFirstOnlyReward,
        int32_t phase,
        bool hasPhaseRewardExceptLastPhaseOnThisQuest,
        bool isLastReward,
        UnityEngine_Color_o color,
        bool isDisplayNotGive,
        bool isDisplayServantLimitOpened,
        bool isDisplayGot,
        bool isDisplayShardReward,
        System_String_o *shardRewardImageName,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  GrandQuestFolderBoardItem_o *v20; // x22
  bool v21; // w24
  bool v22; // w25
  bool v23; // w26
  bool v24; // w27
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v20 = (GrandQuestFolderBoardItem_o *)this;
  v21 = isDisplayFirstOnlyReward;
  v22 = hasPhaseRewardExceptLastPhaseOnThisQuest;
  v23 = isLastReward;
  v24 = isDisplayNotGive;
  System_Object___ctor((Il2CppObject *)this, 0);
  v20->fields.sortStr1 = shardRewardImageName;
  v20 = (GrandQuestFolderBoardItem_o *)((char *)v20 + 56);
  v20[-1].fields._BannerId_k__BackingField = giftIconId;
  v20[-1].fields._WarId_k__BackingField = giftId;
  LOBYTE(v20[-1].fields._Name_k__BackingField) = v21;
  HIDWORD(v20[-1].fields._Name_k__BackingField) = phase;
  LOBYTE(v20[-1].fields._IconId_k__BackingField) = v22;
  BYTE1(v20[-1].fields._IconId_k__BackingField) = v23;
  *((float *)&v20[-1].fields._IconId_k__BackingField + 1) = r;
  *(float *)&v20[-1].fields._ListCreatedTime_k__BackingField = g;
  *((float *)&v20[-1].fields._ListCreatedTime_k__BackingField + 1) = b;
  *(float *)&v20[-1].fields._ClosedMessage_k__BackingField = a;
  BYTE4(v20[-1].fields._ClosedMessage_k__BackingField) = v24;
  BYTE5(v20[-1].fields._ClosedMessage_k__BackingField) = isDisplayServantLimitOpened;
  BYTE6(v20[-1].fields._ClosedMessage_k__BackingField) = isDisplayGot;
  HIBYTE(v20[-1].fields._ClosedMessage_k__BackingField) = isDisplayShardReward;
  sub_1C9403C(v20, (int32_t)shardRewardImageName, v25, v26, v27, v28, v29, v30);
}


UnityEngine_Color_o QuestBoardRewardIcon_RewardIconArgs__get_Color(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields._Color_k__BackingField.fields.r;
  g = this->fields._Color_k__BackingField.fields.g;
  b = this->fields._Color_k__BackingField.fields.b;
  a = this->fields._Color_k__BackingField.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


int32_t QuestBoardRewardIcon_RewardIconArgs__get_GiftIconId(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._GiftIconId_k__BackingField;
}


int32_t QuestBoardRewardIcon_RewardIconArgs__get_GiftId(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._GiftId_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconArgs__get_HasPhaseRewardExceptLastPhaseOnThisQuest(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._HasPhaseRewardExceptLastPhaseOnThisQuest_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconArgs__get_IsDisplayFirstOnlyReward(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDisplayFirstOnlyReward_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconArgs__get_IsDisplayGot(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDisplayGot_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconArgs__get_IsDisplayNotGive(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDisplayNotGive_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconArgs__get_IsDisplayServantLimitOpened(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDisplayServantLimitOpened_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconArgs__get_IsDisplayShardReward(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDisplayShardReward_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconArgs__get_IsLastReward(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsLastReward_k__BackingField;
}


int32_t QuestBoardRewardIcon_RewardIconArgs__get_Phase(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._Phase_k__BackingField;
}


System_String_o *QuestBoardRewardIcon_RewardIconArgs__get_ShardRewardImageName(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._ShardRewardImageName_k__BackingField;
}


void QuestBoardRewardIcon_RewardIconInfo___ctor(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        GiftEntity_o *entity,
        QuestBoardRewardIcon_RewardIconArgs_o *args,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1

  this->fields._PriorNum_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.args = args;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.args, (int32_t)args, v7, v8, v9, v10, v11, v12);
  if ( !entity )
    sub_1C942F0(v13, v14);
  *(_QWORD *)&this->fields._PriorIconId_k__BackingField = *(_QWORD *)&entity->fields.prioredIconId;
  *(_QWORD *)&this->fields._GiftType_k__BackingField = *(_QWORD *)&entity->fields.type;
  this->fields._Num_k__BackingField = entity->fields.num;
}


void QuestBoardRewardIcon_RewardIconInfo___ctor_39195596(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        QuestBoardRewardIcon_RewardIconArgs_o *args,
        int32_t num,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t GiftIconId_k__BackingField; // w8

  this->fields._PriorNum_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.args = args;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.args, (int32_t)args, v7, v8, v9, v10, v11, v12);
  if ( !args )
    sub_1C942F0(v13, v14);
  GiftIconId_k__BackingField = args->fields._GiftIconId_k__BackingField;
  this->fields._Num_k__BackingField = num;
  this->fields._PriorIconId_k__BackingField = GiftIconId_k__BackingField;
}


void QuestBoardRewardIcon_RewardIconInfo___ctor_39195680(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        QuestBoardRewardIcon_RewardIconArgs_o *args,
        int32_t iconId,
        int32_t num,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  this->fields._PriorNum_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.args = args;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.args, (int32_t)args, v9, v10, v11, v12, v13, v14);
  this->fields._PriorIconId_k__BackingField = iconId;
  this->fields._PriorNum_k__BackingField = num;
  this->fields._Num_k__BackingField = -1;
}


int32_t QuestBoardRewardIcon_RewardIconInfo__GetTitleType(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C942F0(this, method);
  if ( args->fields._HasPhaseRewardExceptLastPhaseOnThisQuest_k__BackingField )
  {
    if ( args->fields._IsLastReward_k__BackingField )
      return 1;
    else
      return 2;
  }
  else if ( args->fields._IsDisplayShardReward_k__BackingField )
  {
    return 4;
  }
  else if ( args->fields._IsDisplayFirstOnlyReward_k__BackingField )
  {
    return 3;
  }
  else
  {
    return 0;
  }
}


UnityEngine_Color_o QuestBoardRewardIcon_RewardIconInfo__get_Color(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  args = this->fields.args;
  if ( !args )
    sub_1C942F0(this, method);
  r = args->fields._Color_k__BackingField.fields.r;
  g = args->fields._Color_k__BackingField.fields.g;
  b = args->fields._Color_k__BackingField.fields.b;
  a = args->fields._Color_k__BackingField.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


int32_t QuestBoardRewardIcon_RewardIconInfo__get_GiftType(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._GiftType_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_HasPhaseRewardExceptLastPhaseOnThisQuest(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C942F0(this, method);
  return args->fields._HasPhaseRewardExceptLastPhaseOnThisQuest_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayFirstOnlyReward(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C942F0(this, method);
  return args->fields._IsDisplayFirstOnlyReward_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayGot(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C942F0(this, method);
  return args->fields._IsDisplayGot_k__BackingField
      && !args->fields._IsDisplayNotGive_k__BackingField
      && !args->fields._IsDisplayServantLimitOpened_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayNotGive(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C942F0(this, method);
  return args->fields._IsDisplayNotGive_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayServantLimitOpened(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C942F0(this, method);
  return args->fields._IsDisplayServantLimitOpened_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsDisplaySharedReward(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C942F0(this, method);
  return args->fields._IsDisplayShardReward_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsLastReward(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C942F0(this, method);
  return args->fields._IsLastReward_k__BackingField;
}


int32_t QuestBoardRewardIcon_RewardIconInfo__get_Num(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Num_k__BackingField;
}


int32_t QuestBoardRewardIcon_RewardIconInfo__get_ObjectId(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ObjectId_k__BackingField;
}


int32_t QuestBoardRewardIcon_RewardIconInfo__get_Phase(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C942F0(this, method);
  return args->fields._Phase_k__BackingField;
}


int32_t QuestBoardRewardIcon_RewardIconInfo__get_PriorIconId(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._PriorIconId_k__BackingField;
}


int32_t QuestBoardRewardIcon_RewardIconInfo__get_PriorNum(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._PriorNum_k__BackingField;
}


System_String_o *QuestBoardRewardIcon_RewardIconInfo__get_SharedRewardImageName(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C942F0(this, method);
  return args->fields._ShardRewardImageName_k__BackingField;
}


System_Collections_Generic_IEnumerable_RewardIconInfo__o *QuestBoardRewardIcon_RewardIconUtil__EnumerateRewardIconInfo(
        QuestBoardRewardIcon_RewardIconArgs_o *args,
        const MethodInfo *method)
{
  long double inited; // q0
  QuestBoardRewardIcon_RewardIconArgs_o *v3; // x19
  System_Collections_Generic_IEnumerable_RewardIconInfo__o *v4; // x20
  QuestBoardRewardIcon_RewardIconInfo_o *v5; // x21
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0

  v3 = args;
  if ( (byte_4D2A666 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Empty_RewardIconInfo___);
    sub_1C94098(&QuestBoardRewardIcon_RewardIconInfo___TypeInfo);
    args = (QuestBoardRewardIcon_RewardIconArgs_o *)sub_1C94098(&QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
    byte_4D2A666 = 1;
  }
  if ( !v3 )
    goto LABEL_22;
  if ( v3->fields._GiftIconId_k__BackingField > 0 )
  {
    v4 = (System_Collections_Generic_IEnumerable_RewardIconInfo__o *)sub_1C94140(
                                                                       QuestBoardRewardIcon_RewardIconInfo___TypeInfo,
                                                                       1);
    v5 = (QuestBoardRewardIcon_RewardIconInfo_o *)sub_1C942E4(QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
    QuestBoardRewardIcon_RewardIconInfo___ctor_39195596(v5, v3, -1, v6);
    if ( v4 )
    {
      if ( v5 )
      {
        args = (QuestBoardRewardIcon_RewardIconArgs_o *)sub_1C941D4(v5, v4->klass->_1.element_class);
        if ( !args )
        {
          v18 = sub_1C94314();
          sub_1C941C0(v18, 0);
        }
      }
      if ( !LODWORD(v4[1].monitor) )
        sub_1C942F8(args);
      v4[2].klass = (System_Collections_Generic_IEnumerable_RewardIconInfo__c *)v5;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v4[2], (int32_t)v5, v7, v8, v9, v10, v11, v12);
      return v4;
    }
LABEL_22:
    sub_1C942F0(args, method);
  }
  if ( v3->fields._GiftId_k__BackingField <= 0 )
  {
    v14 = Method_System_Linq_Enumerable_Empty_RewardIconInfo___;
    v15 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_RewardIconInfo___ + 7);
    if ( !v15 )
    {
      sub_1C6A188(Method_System_Linq_Enumerable_Empty_RewardIconInfo___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C6A12C(inited);
    if ( !*(_DWORD *)(v16 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v16);
    v17 = *(_QWORD *)(v14[7] + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C6A12C(inited);
    return **(System_Collections_Generic_IEnumerable_RewardIconInfo__o ***)(v17 + 184);
  }
  return QuestBoardRewardIcon_RewardIconUtil__EnumerateRewardIconInfoByGiftId(v3, method);
}


System_Collections_Generic_IEnumerable_RewardIconInfo__o *QuestBoardRewardIcon_RewardIconUtil__EnumerateRewardIconInfoByGiftId(
        QuestBoardRewardIcon_RewardIconArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x19
  System_Int32_array *Master_object; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x8
  int32_t v13; // w20
  GiftAddEntity_o *ValidPriorDataById; // x0
  GiftAddEntity_o *v15; // x21
  GiftEntity_array *GiftListById; // x0
  QuestBoardRewardIcon_RewardIconUtil___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  System_Func_object__bool__o *_9__1_0; // x22
  Il2CppObject *v20; // x23
  struct QuestBoardRewardIcon_RewardIconUtil___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  __int64 v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Func_object__bool__o *v36; // x22
  System_Func_object__object__o *v37; // x20
  __int64 v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *priorGiftIconIds; // x19
  System_Int32_array *PriorGiftNums; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  __int64 v54; // x8
  System_Func_T1__T2__TResult__o *v55; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2A667 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_GiftAddMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_GiftDetailMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_GiftEntity__RewardIconInfo___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_int__RewardIconInfo___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C94098(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C94098(&System_Func_GiftEntity__RewardIconInfo__TypeInfo);
    sub_1C94098(&System_Func_int__int__RewardIconInfo__TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_QuestBoardRewardIcon_RewardIconUtil___c__EnumerateRewardIconInfoByGiftId_b__1_0__);
    sub_1C94098(&Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0__EnumerateRewardIconInfoByGiftId_b__1__);
    sub_1C94098(&QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_TypeInfo);
    sub_1C94098(&Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1__EnumerateRewardIconInfoByGiftId_b__2__);
    sub_1C94098(&QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_TypeInfo);
    sub_1C94098(&Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2__EnumerateRewardIconInfoByGiftId_b__3__);
    sub_1C94098(&QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_TypeInfo);
    sub_1C94098(&QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo);
    byte_4D2A667 = 1;
  }
  entity = 0;
  v3 = sub_1C942E4(QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_33;
  *(_QWORD *)(v3 + 16) = args;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)args, v6, v7, v8, v9, v10, v11);
  v12 = *(_QWORD *)(v3 + 16);
  if ( !v12 )
    goto LABEL_33;
  v13 = *(_DWORD *)(v12 + 20);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GiftAddMaster___);
  if ( !Master_object )
    goto LABEL_33;
  ValidPriorDataById = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Master_object, v13, 0);
  if ( !ValidPriorDataById || (v15 = ValidPriorDataById, ValidPriorDataById->fields.priorGiftId) )
  {
    Master_object = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_object )
    {
      Master_object = (System_Int32_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Master_object,
                                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_GiftMaster___);
      if ( Master_object )
      {
        GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, v13, 0);
        v17 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo;
        v18 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
        if ( !QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo);
          v17 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo;
        }
        _9__1_0 = (System_Func_object__bool__o *)v17->static_fields->__9__1_0;
        if ( !_9__1_0 )
        {
          if ( !v17->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v17);
            v17 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo;
          }
          v20 = (Il2CppObject *)v17->static_fields->__9;
          _9__1_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_GiftEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__1_0,
            v20,
            Method_QuestBoardRewardIcon_RewardIconUtil___c__EnumerateRewardIconInfoByGiftId_b__1_0__,
            0);
          static_fields = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->static_fields;
          static_fields->__9__1_0 = (struct System_Func_GiftEntity__bool__o *)_9__1_0;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0,
            (int32_t)_9__1_0,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
        }
        v28 = System_Linq_Enumerable__Where_object_(
                v18,
                (System_Func_TSource__bool__o *)_9__1_0,
                (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GiftDetailMaster___);
        if ( Master_object )
        {
          if ( !DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                  &entity,
                  v13,
                  (const MethodInfo_345B50C *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
          {
LABEL_26:
            v37 = (System_Func_object__object__o *)sub_1C942E4(System_Func_GiftEntity__RewardIconInfo__TypeInfo);
            System_Func_object__object____ctor(
              v37,
              (Il2CppObject *)v3,
              Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0__EnumerateRewardIconInfoByGiftId_b__1__,
              0);
            return (System_Collections_Generic_IEnumerable_RewardIconInfo__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 v28,
                                                                                 (System_Func_TSource__TResult__o *)v37,
                                                                                 (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_GiftEntity__RewardIconInfo___);
          }
          v29 = sub_1C942E4(QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_TypeInfo);
          System_Object___ctor((Il2CppObject *)v29, 0);
          Master_object = (System_Int32_array *)entity;
          if ( entity )
          {
            Master_object = GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds((GiftDetailEntity_o *)entity, 0);
            if ( v29 )
            {
              *(_QWORD *)(v29 + 16) = Master_object;
              sub_1C9403C(
                (GrandQuestFolderBoardItem_o *)(v29 + 16),
                (int32_t)Master_object,
                v30,
                v31,
                v32,
                v33,
                v34,
                v35);
              if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v29 + 16), 0) )
              {
                v36 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_GiftEntity__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  v36,
                  (Il2CppObject *)v29,
                  Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2__EnumerateRewardIconInfoByGiftId_b__3__,
                  0);
                v28 = System_Linq_Enumerable__Where_object_(
                        v28,
                        (System_Func_TSource__bool__o *)v36,
                        (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
              }
              goto LABEL_26;
            }
          }
        }
      }
    }
LABEL_33:
    sub_1C942F0(Master_object, v5);
  }
  v39 = sub_1C942E4(QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v39, 0);
  if ( !v39 )
    goto LABEL_33;
  *(_QWORD *)(v39 + 32) = v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v39 + 32), v3, v40, v41, v42, v43, v44, v45);
  priorGiftIconIds = (System_Collections_Generic_IEnumerable_TSource__o *)v15->fields.priorGiftIconIds;
  if ( !priorGiftIconIds )
    priorGiftIconIds = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C94140(int___TypeInfo, 0);
  PriorGiftNums = GiftAddEntity__GetPriorGiftNums(v15, 0);
  *(_QWORD *)(v39 + 24) = PriorGiftNums;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v39 + 24), (int32_t)PriorGiftNums, v48, v49, v50, v51, v52, v53);
  v54 = *(_QWORD *)(v39 + 24);
  if ( v54 )
    LODWORD(v54) = *(_DWORD *)(v54 + 24);
  *(_DWORD *)(v39 + 16) = v54;
  v55 = (System_Func_T1__T2__TResult__o *)sub_1C942E4(System_Func_int__int__RewardIconInfo__TypeInfo);
  System_Func_int__int__object____ctor(
    v55,
    (Il2CppObject *)v39,
    Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1__EnumerateRewardIconInfoByGiftId_b__2__,
    0);
  return (System_Collections_Generic_IEnumerable_RewardIconInfo__o *)System_Linq_Enumerable__Select_int__object__52233908(
                                                                       priorGiftIconIds,
                                                                       (System_Func_TSource__int__TResult__o *)v55,
                                                                       (const MethodInfo_31D06B4 *)Method_System_Linq_Enumerable_Select_int__RewardIconInfo___);
}


System_String_o *QuestBoardRewardIcon_RewardIconUtil__GetSharedRewardImageName(
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2A66D & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C94098(&string_TypeInfo);
    byte_4D2A66D = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_12;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         questInfo->fields.questId,
         (const MethodInfo_345B50C *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
  {
    Master_object = entity;
    if ( entity )
      return QuestExtensionEntity__GetGiftSharedImageName((QuestExtensionEntity_o *)entity, 0);
LABEL_12:
    sub_1C942F0(Master_object, v4);
  }
  return string_TypeInfo->static_fields->Empty;
}


bool QuestBoardRewardIcon_RewardIconUtil__IsDisplayGot(
        MapControl_QuestInfo_o *questInfo,
        UserQuestEntity_o *userQuestEnt,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *v4; // x20
  int32_t questId; // w20
  bool v6; // w8

  v4 = questInfo;
  if ( (byte_4D2A66B & 1) == 0 )
  {
    questInfo = (MapControl_QuestInfo_o *)sub_1C94098(&CondType_TypeInfo);
    byte_4D2A66B = 1;
  }
  if ( !v4 )
    goto LABEL_10;
  questId = v4->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)CondType__IsQuestClear_41072884(questId, -1, 0, 0);
  v6 = 0;
  if ( ((unsigned __int8)questInfo & 1) != 0 )
  {
    if ( userQuestEnt )
      return !UserQuestEntity__HasStatus(userQuestEnt, 4, 0);
LABEL_10:
    sub_1C942F0(questInfo, userQuestEnt);
  }
  return v6;
}


bool QuestBoardRewardIcon_RewardIconUtil__IsDisplayGotBySharedReward(
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *v2; // x20
  int32_t questId; // w19
  int32_t QuestPhaseStart1Clamped; // w20

  v2 = questInfo;
  if ( (byte_4D2A66C & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    questInfo = (MapControl_QuestInfo_o *)sub_1C94098(&DataManager_TypeInfo);
    byte_4D2A66C = 1;
  }
  if ( !v2 )
    goto LABEL_8;
  questId = v2->fields.questId;
  QuestPhaseStart1Clamped = MapControl_QuestInfo__GetQuestPhaseStart1Clamped(v2, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !questInfo )
LABEL_8:
    sub_1C942F0(questInfo, method);
  return QuestBehaviorMaster__IsOpenQuestBehaviorCond(
           (QuestBehaviorMaster_o *)questInfo,
           questId,
           QuestPhaseStart1Clamped,
           11,
           0);
}


bool QuestBoardRewardIcon_RewardIconUtil__IsDisplayNotGive(MapControl_QuestInfo_o *questInfo, const MethodInfo *method)
{
  MapControl_QuestInfo_o *v2; // x20
  int32_t questId; // w19
  int32_t QuestPhaseStart1Clamped; // w20

  v2 = questInfo;
  if ( (byte_4D2A669 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    questInfo = (MapControl_QuestInfo_o *)sub_1C94098(&DataManager_TypeInfo);
    byte_4D2A669 = 1;
  }
  if ( !v2 )
    goto LABEL_8;
  questId = v2->fields.questId;
  QuestPhaseStart1Clamped = MapControl_QuestInfo__GetQuestPhaseStart1Clamped(v2, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !questInfo )
LABEL_8:
    sub_1C942F0(questInfo, method);
  return QuestBehaviorMaster__IsOpenQuestBehaviorCond(
           (QuestBehaviorMaster_o *)questInfo,
           questId,
           QuestPhaseStart1Clamped,
           5,
           0);
}


bool QuestBoardRewardIcon_RewardIconUtil__IsDisplayServantLimitOpened(
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *v2; // x20
  int32_t questId; // w19
  int32_t QuestPhaseStart1Clamped; // w20
  Il2CppObject *Master_object; // x21

  v2 = questInfo;
  if ( (byte_4D2A668 & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    questInfo = (MapControl_QuestInfo_o *)sub_1C94098(&DataManager_TypeInfo);
    byte_4D2A668 = 1;
  }
  if ( !v2 )
    goto LABEL_16;
  questId = v2->fields.questId;
  QuestPhaseStart1Clamped = MapControl_QuestInfo__GetQuestPhaseStart1Clamped(v2, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)CondType__IsQuestClear_41072884(questId, -1, 0, 0);
  if ( ((unsigned __int8)questInfo & 1) != 0 )
  {
    if ( !Master_object )
      goto LABEL_16;
    if ( ServantLimitImageMaster__IsLimitCountSealQuest((ServantLimitImageMaster_o *)Master_object, questId, 0) )
      return 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !questInfo )
LABEL_16:
    sub_1C942F0(questInfo, method);
  return QuestBehaviorMaster__IsOpenQuestBehaviorCond(
           (QuestBehaviorMaster_o *)questInfo,
           questId,
           QuestPhaseStart1Clamped,
           10,
           0);
}


bool QuestBoardRewardIcon_RewardIconUtil__IsDisplaySharedReward(
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *v2; // x20
  int32_t questId; // w19
  int32_t QuestPhaseStart1Clamped; // w20

  v2 = questInfo;
  if ( (byte_4D2A66A & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    questInfo = (MapControl_QuestInfo_o *)sub_1C94098(&DataManager_TypeInfo);
    byte_4D2A66A = 1;
  }
  if ( !v2 )
    goto LABEL_8;
  questId = v2->fields.questId;
  QuestPhaseStart1Clamped = MapControl_QuestInfo__GetQuestPhaseStart1Clamped(v2, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !questInfo )
LABEL_8:
    sub_1C942F0(questInfo, method);
  return QuestBehaviorMaster__IsSharedReward((QuestBehaviorMaster_o *)questInfo, questId, QuestPhaseStart1Clamped, 0);
}


void QuestBoardRewardIcon_RewardIconUtil___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2A66E & 1) == 0 )
  {
    sub_1C94098(&QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo);
    byte_4D2A66E = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->static_fields->__9 = (struct QuestBoardRewardIcon_RewardIconUtil___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestBoardRewardIcon_RewardIconUtil___c___ctor(
        QuestBoardRewardIcon_RewardIconUtil___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardRewardIcon_RewardIconUtil___c___EnumerateRewardIconInfoByGiftId_b__1_0(
        QuestBoardRewardIcon_RewardIconUtil___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C942F0(this, 0);
  return ent->fields.type != 15;
}


void QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0___ctor(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


QuestBoardRewardIcon_RewardIconInfo_o *QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0___EnumerateRewardIconInfoByGiftId_b__1(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  QuestBoardRewardIcon_RewardIconArgs_o *args; // x20
  QuestBoardRewardIcon_RewardIconInfo_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_4D2A66F & 1) == 0 )
  {
    sub_1C94098(&QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
    byte_4D2A66F = 1;
  }
  args = this->fields.args;
  v6 = (QuestBoardRewardIcon_RewardIconInfo_o *)sub_1C942E4(QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
  QuestBoardRewardIcon_RewardIconInfo___ctor(v6, x, args, v7);
  return v6;
}


void QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1___ctor(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
QuestBoardRewardIcon_RewardIconInfo_o *QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1___EnumerateRewardIconInfoByGiftId_b__2(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o *v6; // x20
  struct System_Int32_array *nums; // x8
  int v8; // w22
  struct QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_o *CS___8__locals1; // x8
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x20
  __int64 v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  v6 = this;
  if ( (byte_4D2A670 & 1) == 0 )
  {
    this = (QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o *)sub_1C94098(&QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
    byte_4D2A670 = 1;
  }
  if ( v6->fields.length <= idx )
  {
    v8 = -1;
  }
  else
  {
    nums = v6->fields.nums;
    if ( !nums )
      goto LABEL_10;
    if ( LODWORD(nums->max_length) <= idx )
      sub_1C942F8(this);
    v8 = nums->m_Items[idx];
  }
  CS___8__locals1 = v6->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
LABEL_10:
    sub_1C942F0(this, *(_QWORD *)&id);
  args = CS___8__locals1->fields.args;
  v11 = sub_1C942E4(QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
  *(_DWORD *)(v11 + 20) = -1;
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_QWORD *)(v11 + 40) = args;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v11 + 40), (int32_t)args, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v11 + 16) = id;
  *(_DWORD *)(v11 + 20) = v8;
  *(_DWORD *)(v11 + 32) = -1;
  return (QuestBoardRewardIcon_RewardIconInfo_o *)v11;
}


void QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2___ctor(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2___EnumerateRewardIconInfoByGiftId_b__3(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_o *this,
        GiftEntity_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Int32_array *itemIds; // x19
  System_Func_int__bool__o *v15; // x20

  if ( (byte_4D2A671 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_int____79047624);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    sub_1C94098(&Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3__EnumerateRewardIconInfoByGiftId_b__4__);
    sub_1C94098(&QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3_TypeInfo);
    byte_4D2A671 = 1;
  }
  v5 = sub_1C942E4(QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 16) = info;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)info, v8, v9, v10, v11, v12, v13);
  itemIds = this->fields.itemIds;
  v15 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3__EnumerateRewardIconInfoByGiftId_b__4__,
    0);
  return !BasicHelper__Any_int__51925480(
            itemIds,
            (System_Func_T__bool__o *)v15,
            (const MethodInfo_31851E8 *)Method_BasicHelper_Any_int____79047624);
}


void QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3___ctor(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3___EnumerateRewardIconInfoByGiftId_b__4(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct GiftEntity_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C942F0(this, x);
  return info->fields.objectId == x;
}