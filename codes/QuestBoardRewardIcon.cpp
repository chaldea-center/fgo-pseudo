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
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._ShardRewardImageName_k__BackingField = shardRewardImageName;
  this->fields._GiftIconId_k__BackingField = giftIconId;
  this->fields._GiftId_k__BackingField = giftId;
  this->fields._IsDisplayFirstOnlyReward_k__BackingField = isDisplayFirstOnlyReward;
  this->fields._Phase_k__BackingField = phase;
  this->fields._HasPhaseRewardExceptLastPhaseOnThisQuest_k__BackingField = hasPhaseRewardExceptLastPhaseOnThisQuest;
  this->fields._IsLastReward_k__BackingField = isLastReward;
  this->fields._Color_k__BackingField.fields.r = r;
  this->fields._Color_k__BackingField.fields.g = g;
  this->fields._Color_k__BackingField.fields.b = b;
  this->fields._Color_k__BackingField.fields.a = a;
  this->fields._IsDisplayNotGive_k__BackingField = isDisplayNotGive;
  this->fields._IsDisplayServantLimitOpened_k__BackingField = isDisplayServantLimitOpened;
  this->fields._IsDisplayGot_k__BackingField = isDisplayGot;
  this->fields._IsDisplayShardReward_k__BackingField = isDisplayShardReward;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ShardRewardImageName_k__BackingField,
    (int32_t)shardRewardImageName,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
        System_String_o *questBoardRewardLabelImageName,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x0
  __int64 v22; // x1
  __int128 v23; // q0

  this->fields._PriorNum_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.args = args;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.args, (int32_t)args, v9, v10, v11, v12, v13, v14);
  this->fields.questBoardRewardLabelImageName = questBoardRewardLabelImageName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questBoardRewardLabelImageName,
    (int32_t)questBoardRewardLabelImageName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !entity )
    sub_2213CDC(v21, v22);
  *(_QWORD *)&v23 = *(_QWORD *)&entity->fields.prioredIconId;
  *((_QWORD *)&v23 + 1) = *(_QWORD *)&entity->fields.type;
  *(_OWORD *)&this->fields._PriorIconId_k__BackingField = v23;
  this->fields._Num_k__BackingField = entity->fields.num;
}


void QuestBoardRewardIcon_RewardIconInfo___ctor_45366024(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        QuestBoardRewardIcon_RewardIconArgs_o *args,
        int32_t num,
        System_String_o *questBoardRewardLabelImageName,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t GiftIconId_k__BackingField; // w8

  this->fields._PriorNum_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.args = args;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.args, (int32_t)args, v9, v10, v11, v12, v13, v14);
  this->fields.questBoardRewardLabelImageName = questBoardRewardLabelImageName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questBoardRewardLabelImageName,
    (int32_t)questBoardRewardLabelImageName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !args )
    sub_2213CDC(v21, v22);
  GiftIconId_k__BackingField = args->fields._GiftIconId_k__BackingField;
  this->fields._Num_k__BackingField = num;
  this->fields._PriorIconId_k__BackingField = GiftIconId_k__BackingField;
}


void QuestBoardRewardIcon_RewardIconInfo___ctor_45366136(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        QuestBoardRewardIcon_RewardIconArgs_o *args,
        int32_t iconId,
        int32_t num,
        System_String_o *questBoardRewardLabelImageName,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  this->fields._PriorNum_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.args = args;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.args, (int32_t)args, v11, v12, v13, v14, v15, v16);
  this->fields.questBoardRewardLabelImageName = questBoardRewardLabelImageName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questBoardRewardLabelImageName,
    (int32_t)questBoardRewardLabelImageName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  return args->fields._HasPhaseRewardExceptLastPhaseOnThisQuest_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayFirstOnlyReward(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_2213CDC(this, method);
  return args->fields._IsDisplayFirstOnlyReward_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayGot(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  return args->fields._IsDisplayNotGive_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayServantLimitOpened(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_2213CDC(this, method);
  return args->fields._IsDisplayServantLimitOpened_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsDisplaySharedReward(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_2213CDC(this, method);
  return args->fields._IsDisplayShardReward_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsLastReward(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
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


System_String_o *QuestBoardRewardIcon_RewardIconInfo__get_QuestBoardRewardLabelImageName(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.questBoardRewardLabelImageName;
}


System_String_o *QuestBoardRewardIcon_RewardIconInfo__get_SharedRewardImageName(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_2213CDC(this, method);
  return args->fields._ShardRewardImageName_k__BackingField;
}


System_Collections_Generic_IEnumerable_RewardIconInfo__o *QuestBoardRewardIcon_RewardIconUtil__EnumerateRewardIconInfo(
        QuestBoardRewardIcon_RewardIconArgs_o *args,
        const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  QuestBoardRewardIcon_RewardIconArgs_o *v4; // x19
  System_Collections_Generic_IEnumerable_RewardIconInfo__o *v5; // x20
  QuestBoardRewardIcon_RewardIconInfo_o *v6; // x21
  const MethodInfo *v7; // x4
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  _QWORD *v16; // x19
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0

  v4 = args;
  if ( (byte_596E56C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Empty_RewardIconInfo___);
    sub_2213A60(&QuestBoardRewardIcon_RewardIconInfo___TypeInfo);
    sub_2213A60(&QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
    args = (QuestBoardRewardIcon_RewardIconArgs_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E56C = 1;
  }
  if ( !v4 )
    goto LABEL_22;
  if ( v4->fields._GiftIconId_k__BackingField > 0 )
  {
    v5 = (System_Collections_Generic_IEnumerable_RewardIconInfo__o *)sub_2213B20(
                                                                       QuestBoardRewardIcon_RewardIconInfo___TypeInfo,
                                                                       1);
    v6 = (QuestBoardRewardIcon_RewardIconInfo_o *)sub_2213CCC(QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
    QuestBoardRewardIcon_RewardIconInfo___ctor_45366024(v6, v4, -1, (System_String_o *)StringLiteral_1/*""*/, v7);
    if ( v5 )
    {
      if ( v6 )
      {
        args = (QuestBoardRewardIcon_RewardIconArgs_o *)sub_2213BB4(v6, v5->klass->_1.element_class);
        if ( !args )
        {
          v20 = sub_2213D00(0, v14);
          sub_2213BA0(v20, 0);
        }
      }
      if ( !LODWORD(v5[1].monitor) )
        sub_2213CE4(args);
      v5[2].klass = (System_Collections_Generic_IEnumerable_RewardIconInfo__c *)v6;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5[2], (int32_t)v6, v8, v9, v10, v11, v12, v13);
      return v5;
    }
LABEL_22:
    sub_2213CDC(args, method);
  }
  if ( v4->fields._GiftId_k__BackingField <= 0 )
  {
    v16 = Method_System_Linq_Enumerable_Empty_RewardIconInfo___;
    v17 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_RewardIconInfo___ + 7);
    if ( !v17 )
    {
      sub_224B964(Method_System_Linq_Enumerable_Empty_RewardIconInfo___);
      v17 = v16[7];
    }
    v18 = *(_QWORD *)(v17 + 16);
    if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
      v18 = sub_224B908(v3);
    if ( !*(_DWORD *)(v18 + 228) )
      *(__n128 *)&v3 = j_il2cpp_runtime_class_init_0(v18, method, v2);
    v19 = *(_QWORD *)(v16[7] + 16LL);
    if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
      v19 = sub_224B908(v3);
    return **(System_Collections_Generic_IEnumerable_RewardIconInfo__o ***)(v19 + 184);
  }
  return QuestBoardRewardIcon_RewardIconUtil__EnumerateRewardIconInfoByGiftId(v4, method);
}


System_Collections_Generic_IEnumerable_RewardIconInfo__o *QuestBoardRewardIcon_RewardIconUtil__EnumerateRewardIconInfoByGiftId(
        QuestBoardRewardIcon_RewardIconArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x19
  System_Int32_array *Master_object; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x2
  __int64 v13; // x8
  int32_t v14; // w21
  bool Entity; // w20
  GiftAddEntity_o *ValidPriorDataById; // x0
  GiftAddEntity_o *v17; // x22
  __int64 v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_IEnumerable_TSource__o *priorGiftIconIds; // x19
  System_Int32_array *PriorGiftNums; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x8
  System_Func_T1__T2__TResult__o *v34; // x21
  int32_t QuestBoardOverwriteGiftId; // w0
  GiftEntity_array *GiftListById; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  QuestBoardRewardIcon_RewardIconUtil___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x21
  struct QuestBoardRewardIcon_RewardIconUtil___c_StaticFields *static_fields; // x9
  System_Func_T1__T2__TResult__o *_9__1_0; // x22
  Il2CppObject *v44; // x23
  struct QuestBoardRewardIcon_RewardIconUtil___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  QuestBoardRewardIcon_RewardIconUtil___c_c *v55; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x21
  struct QuestBoardRewardIcon_RewardIconUtil___c_StaticFields *v57; // x9
  System_Func_object__bool__o *_9__1_1; // x22
  Il2CppObject *v59; // x23
  struct QuestBoardRewardIcon_RewardIconUtil___c_StaticFields *v60; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x21
  __int64 v68; // x20
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  System_Func_object__bool__o *v75; // x22
  System_Func_object__object__o *v76; // x20

  if ( (byte_596E56D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GiftAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GiftDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_GiftEntity____f__AnonymousType6_GiftEntity__int____);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__RewardIconInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select___f__AnonymousType6_GiftEntity__int___RewardIconInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where___f__AnonymousType6_GiftEntity__int____);
    sub_2213A60(&System_Func___f__AnonymousType6_GiftEntity__int___bool__TypeInfo);
    sub_2213A60(&System_Func___f__AnonymousType6_GiftEntity__int___RewardIconInfo__TypeInfo);
    sub_2213A60(&System_Func_GiftEntity__int____f__AnonymousType6_GiftEntity__int___TypeInfo);
    sub_2213A60(&System_Func_int__int__RewardIconInfo__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_QuestBoardRewardIcon_RewardIconUtil___c__EnumerateRewardIconInfoByGiftId_b__1_0__);
    sub_2213A60(&Method_QuestBoardRewardIcon_RewardIconUtil___c__EnumerateRewardIconInfoByGiftId_b__1_1__);
    sub_2213A60(&Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0__EnumerateRewardIconInfoByGiftId_b__2__);
    sub_2213A60(&QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_TypeInfo);
    sub_2213A60(&Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1__EnumerateRewardIconInfoByGiftId_b__3__);
    sub_2213A60(&QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_TypeInfo);
    sub_2213A60(&Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2__EnumerateRewardIconInfoByGiftId_b__4__);
    sub_2213A60(&QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_TypeInfo);
    sub_2213A60(&QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo);
    byte_596E56D = 1;
  }
  v3 = sub_2213CCC(QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_41;
  *(_QWORD *)(v3 + 24) = args;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)args, v6, v7, v8, v9, v10, v11);
  v13 = *(_QWORD *)(v3 + 24);
  if ( !v13 )
    goto LABEL_41;
  v14 = *(_DWORD *)(v13 + 20);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v12);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftDetailMaster___);
  if ( !Master_object )
    goto LABEL_41;
  Entity = DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             (Il2CppObject **)(v3 + 16),
             v14,
             (const MethodInfo_3F10B80 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftAddMaster___);
  if ( !Master_object )
    goto LABEL_41;
  ValidPriorDataById = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Master_object, v14, 0);
  if ( !ValidPriorDataById )
  {
    if ( Entity )
    {
      Master_object = *(System_Int32_array **)(v3 + 16);
      if ( !Master_object )
        goto LABEL_41;
      QuestBoardOverwriteGiftId = GiftDetailEntity__GetQuestBoardOverwriteGiftId((GiftDetailEntity_o *)Master_object, 0);
      if ( QuestBoardOverwriteGiftId >= 1 )
        v14 = QuestBoardOverwriteGiftId;
    }
    goto LABEL_21;
  }
  v17 = ValidPriorDataById;
  if ( ValidPriorDataById->fields.priorGiftId )
  {
LABEL_21:
    Master_object = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_object )
    {
      Master_object = (System_Int32_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Master_object,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
      if ( Master_object )
      {
        GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, v14, 0);
        v40 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo;
        v41 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
        if ( !*(&QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo, v38, v39);
          v40 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo;
        }
        static_fields = v40->static_fields;
        _9__1_0 = (System_Func_T1__T2__TResult__o *)static_fields->__9__1_0;
        if ( !_9__1_0 )
        {
          if ( !*(&v40->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v40, v38, v39);
            static_fields = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->static_fields;
          }
          v44 = (Il2CppObject *)static_fields->__9;
          _9__1_0 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_GiftEntity__int____f__AnonymousType6_GiftEntity__int___TypeInfo);
          System_Func_object__int__object____ctor(
            _9__1_0,
            v44,
            Method_QuestBoardRewardIcon_RewardIconUtil___c__EnumerateRewardIconInfoByGiftId_b__1_0__,
            0);
          v45 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->static_fields;
          v45->__9__1_0 = (struct System_Func_GiftEntity__int____f__AnonymousType6_GiftEntity__int___o *)_9__1_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v45->__9__1_0,
            (int32_t)_9__1_0,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51);
        }
        v52 = System_Linq_Enumerable__Select_object__object__59315436(
                v41,
                (System_Func_TSource__int__TResult__o *)_9__1_0,
                (const MethodInfo_38914EC *)Method_System_Linq_Enumerable_Select_GiftEntity____f__AnonymousType6_GiftEntity__int____);
        v55 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo;
        v56 = (System_Collections_Generic_IEnumerable_TSource__o *)v52;
        if ( !*(&QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo, v53, v54);
          v55 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo;
        }
        v57 = v55->static_fields;
        _9__1_1 = (System_Func_object__bool__o *)v57->__9__1_1;
        if ( !_9__1_1 )
        {
          if ( !*(&v55->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v55, v53, v54);
            v57 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->static_fields;
          }
          v59 = (Il2CppObject *)v57->__9;
          _9__1_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func___f__AnonymousType6_GiftEntity__int___bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__1_1,
            v59,
            Method_QuestBoardRewardIcon_RewardIconUtil___c__EnumerateRewardIconInfoByGiftId_b__1_1__,
            0);
          v60 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->static_fields;
          v60->__9__1_1 = (struct System_Func___f__AnonymousType6_GiftEntity__int___bool__o *)_9__1_1;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v60->__9__1_1,
            (int32_t)_9__1_1,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66);
        }
        v67 = System_Linq_Enumerable__Where_object_(
                v56,
                (System_Func_TSource__bool__o *)_9__1_1,
                (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where___f__AnonymousType6_GiftEntity__int____);
        if ( !Entity )
          goto LABEL_40;
        v68 = sub_2213CCC(QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_TypeInfo);
        System_Object___ctor((Il2CppObject *)v68, 0);
        Master_object = *(System_Int32_array **)(v3 + 16);
        if ( Master_object )
        {
          Master_object = GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds((GiftDetailEntity_o *)Master_object, 0);
          if ( v68 )
          {
            *(_QWORD *)(v68 + 16) = Master_object;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v68 + 16),
              (int32_t)Master_object,
              v69,
              v70,
              v71,
              v72,
              v73,
              v74);
            if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v68 + 16), 0) )
            {
              v75 = (System_Func_object__bool__o *)sub_2213CCC(System_Func___f__AnonymousType6_GiftEntity__int___bool__TypeInfo);
              System_Func_object__bool____ctor(
                v75,
                (Il2CppObject *)v68,
                Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2__EnumerateRewardIconInfoByGiftId_b__4__,
                0);
              v67 = System_Linq_Enumerable__Where_object_(
                      v67,
                      (System_Func_TSource__bool__o *)v75,
                      (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where___f__AnonymousType6_GiftEntity__int____);
            }
LABEL_40:
            v76 = (System_Func_object__object__o *)sub_2213CCC(System_Func___f__AnonymousType6_GiftEntity__int___RewardIconInfo__TypeInfo);
            System_Func_object__object____ctor(
              v76,
              (Il2CppObject *)v3,
              Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0__EnumerateRewardIconInfoByGiftId_b__2__,
              0);
            return (System_Collections_Generic_IEnumerable_RewardIconInfo__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 v67,
                                                                                 (System_Func_TSource__TResult__o *)v76,
                                                                                 (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select___f__AnonymousType6_GiftEntity__int___RewardIconInfo___);
          }
        }
      }
    }
LABEL_41:
    sub_2213CDC(Master_object, v5);
  }
  v18 = sub_2213CCC(QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0);
  if ( !v18 )
    goto LABEL_41;
  *(_QWORD *)(v18 + 32) = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 32), v3, v19, v20, v21, v22, v23, v24);
  priorGiftIconIds = (System_Collections_Generic_IEnumerable_TSource__o *)v17->fields.priorGiftIconIds;
  if ( !priorGiftIconIds )
    priorGiftIconIds = (System_Collections_Generic_IEnumerable_TSource__o *)sub_2213B20(int___TypeInfo, 0);
  PriorGiftNums = GiftAddEntity__GetPriorGiftNums(v17, 0);
  *(_QWORD *)(v18 + 24) = PriorGiftNums;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 24), (int32_t)PriorGiftNums, v27, v28, v29, v30, v31, v32);
  v33 = *(_QWORD *)(v18 + 24);
  if ( v33 )
    LODWORD(v33) = *(_DWORD *)(v33 + 24);
  *(_DWORD *)(v18 + 16) = v33;
  v34 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_int__int__RewardIconInfo__TypeInfo);
  System_Func_int__int__object____ctor(
    v34,
    (Il2CppObject *)v18,
    Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1__EnumerateRewardIconInfoByGiftId_b__3__,
    0);
  return (System_Collections_Generic_IEnumerable_RewardIconInfo__o *)System_Linq_Enumerable__Select_int__object__59302348(
                                                                       priorGiftIconIds,
                                                                       (System_Func_TSource__int__TResult__o *)v34,
                                                                       (const MethodInfo_388E1CC *)Method_System_Linq_Enumerable_Select_int__RewardIconInfo___);
}


System_String_o *QuestBoardRewardIcon_RewardIconUtil__GetSharedRewardImageName(
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596E573 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    byte_596E573 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_12;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         questInfo->fields.questId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
  {
    Master_object = entity;
    if ( entity )
      return QuestExtensionEntity__GetGiftSharedImageName((QuestExtensionEntity_o *)entity, 0);
LABEL_12:
    sub_2213CDC(Master_object, v6);
  }
  return **(System_String_o ***)(qword_5984390 + 184);
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
  if ( (byte_596E571 & 1) == 0 )
  {
    questInfo = (MapControl_QuestInfo_o *)sub_2213A60(&CondType_TypeInfo);
    byte_596E571 = 1;
  }
  if ( !v4 )
    goto LABEL_10;
  questId = v4->fields.questId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, userQuestEnt, method);
  questInfo = (MapControl_QuestInfo_o *)CondType__IsQuestClear_47284152(questId, -1, 0, 0);
  v6 = 0;
  if ( ((unsigned __int8)questInfo & 1) != 0 )
  {
    if ( userQuestEnt )
      return !UserQuestEntity__HasStatus(userQuestEnt, 4, 0);
LABEL_10:
    sub_2213CDC(questInfo, userQuestEnt);
  }
  return v6;
}


bool QuestBoardRewardIcon_RewardIconUtil__IsDisplayGotBySharedReward(
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *v2; // x20
  int32_t questId; // w19
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t QuestPhaseStart1Clamped; // w20

  v2 = questInfo;
  if ( (byte_596E572 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    questInfo = (MapControl_QuestInfo_o *)sub_2213A60(&DataManager_TypeInfo);
    byte_596E572 = 1;
  }
  if ( !v2 )
    goto LABEL_8;
  questId = v2->fields.questId;
  QuestPhaseStart1Clamped = MapControl_QuestInfo__GetQuestPhaseStart1Clamped(v2, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  questInfo = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !questInfo )
LABEL_8:
    sub_2213CDC(questInfo, method);
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
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t QuestPhaseStart1Clamped; // w20

  v2 = questInfo;
  if ( (byte_596E56F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    questInfo = (MapControl_QuestInfo_o *)sub_2213A60(&DataManager_TypeInfo);
    byte_596E56F = 1;
  }
  if ( !v2 )
    goto LABEL_8;
  questId = v2->fields.questId;
  QuestPhaseStart1Clamped = MapControl_QuestInfo__GetQuestPhaseStart1Clamped(v2, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  questInfo = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !questInfo )
LABEL_8:
    sub_2213CDC(questInfo, method);
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
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t QuestPhaseStart1Clamped; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Master_object; // x21
  __int64 v10; // x2

  v2 = questInfo;
  if ( (byte_596E56E & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    questInfo = (MapControl_QuestInfo_o *)sub_2213A60(&DataManager_TypeInfo);
    byte_596E56E = 1;
  }
  if ( !v2 )
    goto LABEL_16;
  questId = v2->fields.questId;
  QuestPhaseStart1Clamped = MapControl_QuestInfo__GetQuestPhaseStart1Clamped(v2, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7, v8);
  questInfo = (MapControl_QuestInfo_o *)CondType__IsQuestClear_47284152(questId, -1, 0, 0);
  if ( ((unsigned __int8)questInfo & 1) != 0 )
  {
    if ( !Master_object )
      goto LABEL_16;
    if ( ServantLimitImageMaster__IsLimitCountSealQuest((ServantLimitImageMaster_o *)Master_object, questId, 0) )
      return 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v10);
  questInfo = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !questInfo )
LABEL_16:
    sub_2213CDC(questInfo, method);
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
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t QuestPhaseStart1Clamped; // w20

  v2 = questInfo;
  if ( (byte_596E570 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    questInfo = (MapControl_QuestInfo_o *)sub_2213A60(&DataManager_TypeInfo);
    byte_596E570 = 1;
  }
  if ( !v2 )
    goto LABEL_8;
  questId = v2->fields.questId;
  QuestPhaseStart1Clamped = MapControl_QuestInfo__GetQuestPhaseStart1Clamped(v2, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  questInfo = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !questInfo )
LABEL_8:
    sub_2213CDC(questInfo, method);
  return QuestBehaviorMaster__IsSharedReward((QuestBehaviorMaster_o *)questInfo, questId, QuestPhaseStart1Clamped, 0);
}


void QuestBoardRewardIcon_RewardIconUtil___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596E574 & 1) == 0 )
  {
    sub_2213A60(&QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo);
    byte_596E574 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->static_fields->__9 = (struct QuestBoardRewardIcon_RewardIconUtil___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->static_fields,
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


__f__AnonymousType6_GiftEntity__int__o *QuestBoardRewardIcon_RewardIconUtil___c___EnumerateRewardIconInfoByGiftId_b__1_0(
        QuestBoardRewardIcon_RewardIconUtil___c_o *this,
        GiftEntity_o *ent,
        int32_t idx,
        const MethodInfo *method)
{
  __f__AnonymousType6__GiftEntity_j__TPar___OriginalIndex_j__TPar__o *v6; // x21

  if ( (byte_596E575 & 1) == 0 )
  {
    sub_2213A60(&Method___f__AnonymousType6_GiftEntity__int___ctor__);
    sub_2213A60(&_f__AnonymousType6_GiftEntity__int__TypeInfo);
    byte_596E575 = 1;
  }
  v6 = (__f__AnonymousType6__GiftEntity_j__TPar___OriginalIndex_j__TPar__o *)sub_2213CCC(_f__AnonymousType6_GiftEntity__int__TypeInfo);
  _f__AnonymousType6_object__int____ctor(
    v6,
    (Il2CppObject *)ent,
    idx,
    (const MethodInfo_3B1361C *)Method___f__AnonymousType6_GiftEntity__int___ctor__);
  return (__f__AnonymousType6_GiftEntity__int__o *)v6;
}


bool QuestBoardRewardIcon_RewardIconUtil___c___EnumerateRewardIconInfoByGiftId_b__1_1(
        QuestBoardRewardIcon_RewardIconUtil___c_o *this,
        __f__AnonymousType6_GiftEntity__int__o *info,
        const MethodInfo *method)
{
  struct GiftEntity_o *GiftEntity_i__Field; // x8

  if ( (byte_596E576 & 1) == 0 )
  {
    this = (QuestBoardRewardIcon_RewardIconUtil___c_o *)sub_2213A60(&Method___f__AnonymousType6_GiftEntity__int__get_GiftEntity__);
    byte_596E576 = 1;
  }
  if ( !info || (GiftEntity_i__Field = info->fields._GiftEntity_i__Field) == 0 )
    sub_2213CDC(this, info);
  return GiftEntity_i__Field->fields.type != 15;
}


void QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0___ctor(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


QuestBoardRewardIcon_RewardIconInfo_o *QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0___EnumerateRewardIconInfoByGiftId_b__2(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_o *this,
        __f__AnonymousType6_GiftEntity__int__o *x,
        const MethodInfo *method)
{
  GiftDetailEntity_o *giftDetailEntity; // x0
  System_String_o *QuestBoardRewardLabelImageName; // x21
  GiftEntity_o *GiftEntity_i__Field; // x19
  QuestBoardRewardIcon_RewardIconArgs_o *args; // x20
  QuestBoardRewardIcon_RewardIconInfo_o *v9; // x22
  const MethodInfo *v10; // x4

  if ( (byte_596E577 & 1) == 0 )
  {
    sub_2213A60(&QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
    sub_2213A60(&Method___f__AnonymousType6_GiftEntity__int__get_GiftEntity__);
    sub_2213A60(&Method___f__AnonymousType6_GiftEntity__int__get_OriginalIndex__);
    byte_596E577 = 1;
  }
  giftDetailEntity = this->fields.giftDetailEntity;
  if ( !giftDetailEntity )
  {
    if ( x )
    {
LABEL_8:
      QuestBoardRewardLabelImageName = **(System_String_o ***)(qword_5984390 + 184);
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(giftDetailEntity, x);
  }
  if ( !x )
    goto LABEL_10;
  QuestBoardRewardLabelImageName = GiftDetailEntity__GetQuestBoardRewardLabelImageName(
                                     giftDetailEntity,
                                     x->fields._OriginalIndex_i__Field,
                                     0);
  if ( !QuestBoardRewardLabelImageName )
    goto LABEL_8;
LABEL_9:
  GiftEntity_i__Field = x->fields._GiftEntity_i__Field;
  args = this->fields.args;
  v9 = (QuestBoardRewardIcon_RewardIconInfo_o *)sub_2213CCC(QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
  QuestBoardRewardIcon_RewardIconInfo___ctor(v9, GiftEntity_i__Field, args, QuestBoardRewardLabelImageName, v10);
  return v9;
}


void QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1___ctor(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
QuestBoardRewardIcon_RewardIconInfo_o *QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1___EnumerateRewardIconInfoByGiftId_b__3(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o *v6; // x20
  struct QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_o *CS___8__locals1; // x8
  QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o *v8; // x22
  struct System_Int32_array *nums; // x8
  int32_t v10; // w21
  struct QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_o *v11; // x8
  QuestBoardRewardIcon_RewardIconArgs_o *args; // x20
  QuestBoardRewardIcon_RewardIconInfo_o *v13; // x23
  const MethodInfo *v14; // x5

  v6 = this;
  if ( (byte_596E578 & 1) == 0 )
  {
    this = (QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o *)sub_2213A60(&QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
    byte_596E578 = 1;
  }
  CS___8__locals1 = v6->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  this = (QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o *)CS___8__locals1->fields.giftDetailEntity;
  if ( !this
    || (this = (QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o *)GiftDetailEntity__GetQuestBoardRewardLabelImageName(
                                                                               (GiftDetailEntity_o *)this,
                                                                               idx,
                                                                               0),
        (v8 = this) == 0) )
  {
    v8 = **(QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o ***)(qword_5984390 + 184);
  }
  if ( v6->fields.length <= idx )
  {
    v10 = -1;
  }
  else
  {
    nums = v6->fields.nums;
    if ( !nums )
      goto LABEL_14;
    if ( LODWORD(nums->max_length) <= idx )
      sub_2213CE4(this);
    v10 = nums->m_Items[idx];
  }
  v11 = v6->fields.CS___8__locals1;
  if ( !v11 )
LABEL_14:
    sub_2213CDC(this, *(_QWORD *)&id);
  args = v11->fields.args;
  v13 = (QuestBoardRewardIcon_RewardIconInfo_o *)sub_2213CCC(QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
  QuestBoardRewardIcon_RewardIconInfo___ctor_45366136(v13, args, id, v10, (System_String_o *)v8, v14);
  return v13;
}


void QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2___ctor(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2___EnumerateRewardIconInfoByGiftId_b__4(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_o *this,
        __f__AnonymousType6_GiftEntity__int__o *info,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Int32_array *itemIds; // x19
  System_Func_int__bool__o *v15; // x20

  if ( (byte_596E579 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3__EnumerateRewardIconInfoByGiftId_b__5__);
    sub_2213A60(&QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3_TypeInfo);
    byte_596E579 = 1;
  }
  v5 = sub_2213CCC(QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = info;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)info, v8, v9, v10, v11, v12, v13);
  itemIds = this->fields.itemIds;
  v15 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3__EnumerateRewardIconInfoByGiftId_b__5__,
    0);
  return !BasicHelper__Any_int__58784608(
            itemIds,
            (System_Func_T__bool__o *)v15,
            (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
}


void QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3___ctor(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3___EnumerateRewardIconInfoByGiftId_b__5(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3_o *this,
        int32_t x,
        const MethodInfo *method)
{
  QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3_o *v4; // x20
  struct __f__AnonymousType6_GiftEntity__int__o *info; // x8
  struct GiftEntity_o *GiftEntity_i__Field; // x8

  v4 = this;
  if ( (byte_596E57A & 1) == 0 )
  {
    this = (QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_3_o *)sub_2213A60(&Method___f__AnonymousType6_GiftEntity__int__get_GiftEntity__);
    byte_596E57A = 1;
  }
  info = v4->fields.info;
  if ( !info || (GiftEntity_i__Field = info->fields._GiftEntity_i__Field) == 0 )
    sub_2213CDC(this, *(_QWORD *)&x);
  return GiftEntity_i__Field->fields.objectId == x;
}