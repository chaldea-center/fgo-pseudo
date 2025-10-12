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
  CGThumbnailListItem_o *v20; // x22
  bool v21; // w24
  bool v22; // w25
  bool v23; // w26
  bool v24; // w27
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v20 = (CGThumbnailListItem_o *)this;
  v21 = isDisplayFirstOnlyReward;
  v22 = hasPhaseRewardExceptLastPhaseOnThisQuest;
  v23 = isLastReward;
  v24 = isDisplayNotGive;
  System_Object___ctor((Il2CppObject *)this, 0);
  v20->fields.sortStr1 = shardRewardImageName;
  v20 = (CGThumbnailListItem_o *)((char *)v20 + 56);
  LODWORD(v20[-1].fields.basePosition.fields.y) = giftIconId;
  LODWORD(v20[-1].fields.basePosition.fields.z) = giftId;
  LOBYTE(v20[-1].fields.viewObject) = v21;
  HIDWORD(v20[-1].fields.viewObject) = phase;
  LOBYTE(v20[-1].fields._Id_k__BackingField) = v22;
  BYTE1(v20[-1].fields._Id_k__BackingField) = v23;
  *(float *)&v20[-1].fields._Priority_k__BackingField = r;
  *(float *)&v20[-1].fields._Type_k__BackingField = g;
  *(float *)&v20[-1].fields._HaveDifferenceCG_k__BackingField = b;
  *(float *)&v20[-1].fields._ThumbnailSpritePath_k__BackingField = a;
  BYTE4(v20[-1].fields._ThumbnailSpritePath_k__BackingField) = v24;
  BYTE5(v20[-1].fields._ThumbnailSpritePath_k__BackingField) = isDisplayServantLimitOpened;
  BYTE6(v20[-1].fields._ThumbnailSpritePath_k__BackingField) = isDisplayGot;
  HIBYTE(v20[-1].fields._ThumbnailSpritePath_k__BackingField) = isDisplayShardReward;
  sub_1C32BC4(v20, (int32_t)shardRewardImageName, v25, v26);
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
  const MethodInfo *v8; // x3
  __int64 v9; // x0

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.args = args;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.args, (int32_t)args, v7, v8);
  if ( !entity )
    sub_1C32E7C(v9);
  this->fields._PriorIconId_k__BackingField = entity->fields.prioredIconId;
  *(_QWORD *)&this->fields._GiftType_k__BackingField = *(_QWORD *)&entity->fields.type;
  this->fields._Num_k__BackingField = entity->fields.num;
}


void QuestBoardRewardIcon_RewardIconInfo___ctor_38371908(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        QuestBoardRewardIcon_RewardIconArgs_o *args,
        int32_t num,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  int32_t GiftIconId_k__BackingField; // w8

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.args = args;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.args, (int32_t)args, v7, v8);
  if ( !args )
    sub_1C32E7C(v9);
  GiftIconId_k__BackingField = args->fields._GiftIconId_k__BackingField;
  this->fields._Num_k__BackingField = num;
  this->fields._PriorIconId_k__BackingField = GiftIconId_k__BackingField;
}


int32_t QuestBoardRewardIcon_RewardIconInfo__GetTitleType(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return args->fields._HasPhaseRewardExceptLastPhaseOnThisQuest_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayFirstOnlyReward(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C32E7C(this);
  return args->fields._IsDisplayFirstOnlyReward_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayGot(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return args->fields._IsDisplayNotGive_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayServantLimitOpened(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C32E7C(this);
  return args->fields._IsDisplayServantLimitOpened_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsDisplaySharedReward(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C32E7C(this);
  return args->fields._IsDisplayShardReward_k__BackingField;
}


bool QuestBoardRewardIcon_RewardIconInfo__get_IsLastReward(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return args->fields._Phase_k__BackingField;
}


int32_t QuestBoardRewardIcon_RewardIconInfo__get_PriorIconId(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._PriorIconId_k__BackingField;
}


System_String_o *QuestBoardRewardIcon_RewardIconInfo__get_SharedRewardImageName(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1C32E7C(this);
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
  const MethodInfo *v8; // x3
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  v3 = args;
  if ( (byte_4C3581E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Empty_RewardIconInfo___);
    sub_1C32C20(&QuestBoardRewardIcon_RewardIconInfo___TypeInfo);
    args = (QuestBoardRewardIcon_RewardIconArgs_o *)sub_1C32C20(&QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
    byte_4C3581E = 1;
  }
  if ( !v3 )
    goto LABEL_22;
  if ( v3->fields._GiftIconId_k__BackingField > 0 )
  {
    v4 = (System_Collections_Generic_IEnumerable_RewardIconInfo__o *)sub_1C32CC8(
                                                                       QuestBoardRewardIcon_RewardIconInfo___TypeInfo,
                                                                       1);
    v5 = (QuestBoardRewardIcon_RewardIconInfo_o *)sub_1C32E6C(QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
    QuestBoardRewardIcon_RewardIconInfo___ctor_38371908(v5, v3, -1, v6);
    if ( v4 )
    {
      if ( v5 )
      {
        args = (QuestBoardRewardIcon_RewardIconArgs_o *)sub_1C32D5C(v5, v4->klass->_1.element_class);
        if ( !args )
        {
          v14 = sub_1C32EA0();
          sub_1C32D48(v14, 0);
        }
      }
      if ( !LODWORD(v4[1].monitor) )
        sub_1C32E84(args);
      v4[2].klass = (System_Collections_Generic_IEnumerable_RewardIconInfo__c *)v5;
      sub_1C32BC4((CGThumbnailListItem_o *)&v4[2], (int32_t)v5, v7, v8);
      return v4;
    }
LABEL_22:
    sub_1C32E7C(args);
  }
  if ( v3->fields._GiftId_k__BackingField <= 0 )
  {
    v10 = Method_System_Linq_Enumerable_Empty_RewardIconInfo___;
    v11 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_RewardIconInfo___ + 7);
    if ( !v11 )
    {
      sub_1C83390(Method_System_Linq_Enumerable_Empty_RewardIconInfo___);
      v11 = v10[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v12 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C83334(inited);
    return **(System_Collections_Generic_IEnumerable_RewardIconInfo__o ***)(v13 + 184);
  }
  return QuestBoardRewardIcon_RewardIconUtil__EnumerateRewardIconInfoByGiftId(v3, method);
}


System_Collections_Generic_IEnumerable_RewardIconInfo__o *QuestBoardRewardIcon_RewardIconUtil__EnumerateRewardIconInfoByGiftId(
        QuestBoardRewardIcon_RewardIconArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x19
  System_Int32_array *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x8
  int32_t v8; // w20
  GiftEntity_array *GiftListById; // x0
  QuestBoardRewardIcon_RewardIconUtil___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x21
  System_Func_object__bool__o *_9__1_0; // x22
  Il2CppObject *v13; // x23
  struct QuestBoardRewardIcon_RewardIconUtil___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x21
  __int64 v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Func_object__bool__o *v21; // x22
  System_Func_object__object__o *v22; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3581F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_GiftDetailMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_GiftEntity__RewardIconInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1C32C20(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_GiftEntity__RewardIconInfo__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_QuestBoardRewardIcon_RewardIconUtil___c__EnumerateRewardIconInfoByGiftId_b__1_0__);
    sub_1C32C20(&Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0__EnumerateRewardIconInfoByGiftId_b__1__);
    sub_1C32C20(&QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_TypeInfo);
    sub_1C32C20(&Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1__EnumerateRewardIconInfoByGiftId_b__2__);
    sub_1C32C20(&QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_TypeInfo);
    sub_1C32C20(&QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo);
    byte_4C3581F = 1;
  }
  entity = 0;
  v3 = sub_1C32E6C(QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_22;
  *(_QWORD *)(v3 + 16) = args;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)args, v5, v6);
  v7 = *(_QWORD *)(v3 + 16);
  if ( !v7 )
    goto LABEL_22;
  v8 = *(_DWORD *)(v7 + 20);
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_22;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v8, 0);
  v10 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
  if ( !QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo);
    v10 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v10->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1_0,
      v13,
      Method_QuestBoardRewardIcon_RewardIconUtil___c__EnumerateRewardIconInfoByGiftId_b__1_0__,
      0);
    static_fields = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_GiftEntity__bool__o *)_9__1_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_object_(
          v11,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GiftDetailMaster___);
  if ( !Instance )
    goto LABEL_22;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          v8,
          (const MethodInfo_3396884 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    goto LABEL_21;
  v18 = sub_1C32E6C(QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0);
  Instance = (System_Int32_array *)entity;
  if ( !entity
    || (Instance = GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds((GiftDetailEntity_o *)entity, 0), !v18) )
  {
LABEL_22:
    sub_1C32E7C(Instance);
  }
  *(_QWORD *)(v18 + 16) = Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 16), (int32_t)Instance, v19, v20);
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v18 + 16), 0) )
  {
    v21 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v21,
      (Il2CppObject *)v18,
      Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1__EnumerateRewardIconInfoByGiftId_b__2__,
      0);
    v17 = System_Linq_Enumerable__Where_object_(
            v17,
            (System_Func_TSource__bool__o *)v21,
            (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  }
LABEL_21:
  v22 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_GiftEntity__RewardIconInfo__TypeInfo);
  System_Func_object__object____ctor(
    v22,
    (Il2CppObject *)v3,
    Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0__EnumerateRewardIconInfoByGiftId_b__1__,
    0);
  return (System_Collections_Generic_IEnumerable_RewardIconInfo__o *)System_Linq_Enumerable__Select_object__object_(
                                                                       v17,
                                                                       (System_Func_TSource__TResult__o *)v22,
                                                                       (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_GiftEntity__RewardIconInfo___);
}


System_String_o *QuestBoardRewardIcon_RewardIconUtil__GetSharedRewardImageName(
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C35825 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C32C20(&string_TypeInfo);
    byte_4C35825 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestExtensionMaster___);
  if ( !questInfo || !Master_object )
    goto LABEL_12;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         questInfo->fields.questId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__) )
  {
    Master_object = entity;
    if ( entity )
      return QuestExtensionEntity__GetGiftSharedImageName((QuestExtensionEntity_o *)entity, 0);
LABEL_12:
    sub_1C32E7C(Master_object);
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
  if ( (byte_4C35823 & 1) == 0 )
  {
    questInfo = (MapControl_QuestInfo_o *)sub_1C32C20(&CondType_TypeInfo);
    byte_4C35823 = 1;
  }
  if ( !v4 )
    goto LABEL_10;
  questId = v4->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)CondType__IsQuestClear_40225464(questId, -1, 0, 0);
  v6 = 0;
  if ( ((unsigned __int8)questInfo & 1) != 0 )
  {
    if ( userQuestEnt )
      return !UserQuestEntity__HasStatus(userQuestEnt, 4, 0);
LABEL_10:
    sub_1C32E7C(questInfo);
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
  if ( (byte_4C35824 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    questInfo = (MapControl_QuestInfo_o *)sub_1C32C20(&DataManager_TypeInfo);
    byte_4C35824 = 1;
  }
  if ( !v2 )
    goto LABEL_8;
  questId = v2->fields.questId;
  QuestPhaseStart1Clamped = MapControl_QuestInfo__GetQuestPhaseStart1Clamped(v2, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !questInfo )
LABEL_8:
    sub_1C32E7C(questInfo);
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
  if ( (byte_4C35821 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    questInfo = (MapControl_QuestInfo_o *)sub_1C32C20(&DataManager_TypeInfo);
    byte_4C35821 = 1;
  }
  if ( !v2 )
    goto LABEL_8;
  questId = v2->fields.questId;
  QuestPhaseStart1Clamped = MapControl_QuestInfo__GetQuestPhaseStart1Clamped(v2, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !questInfo )
LABEL_8:
    sub_1C32E7C(questInfo);
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
  if ( (byte_4C35820 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    questInfo = (MapControl_QuestInfo_o *)sub_1C32C20(&DataManager_TypeInfo);
    byte_4C35820 = 1;
  }
  if ( !v2 )
    goto LABEL_16;
  questId = v2->fields.questId;
  QuestPhaseStart1Clamped = MapControl_QuestInfo__GetQuestPhaseStart1Clamped(v2, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)CondType__IsQuestClear_40225464(questId, -1, 0, 0);
  if ( ((unsigned __int8)questInfo & 1) != 0 )
  {
    if ( !Master_object )
      goto LABEL_16;
    if ( ServantLimitImageMaster__IsLimitCountSealQuest((ServantLimitImageMaster_o *)Master_object, questId, 0) )
      return 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !questInfo )
LABEL_16:
    sub_1C32E7C(questInfo);
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
  if ( (byte_4C35822 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    questInfo = (MapControl_QuestInfo_o *)sub_1C32C20(&DataManager_TypeInfo);
    byte_4C35822 = 1;
  }
  if ( !v2 )
    goto LABEL_8;
  questId = v2->fields.questId;
  QuestPhaseStart1Clamped = MapControl_QuestInfo__GetQuestPhaseStart1Clamped(v2, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !questInfo )
LABEL_8:
    sub_1C32E7C(questInfo);
  return QuestBehaviorMaster__IsSharedReward((QuestBehaviorMaster_o *)questInfo, questId, QuestPhaseStart1Clamped, 0);
}


void QuestBoardRewardIcon_RewardIconUtil___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C35826 & 1) == 0 )
  {
    sub_1C32C20(&QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo);
    byte_4C35826 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->static_fields->__9 = (struct QuestBoardRewardIcon_RewardIconUtil___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C32E7C(this);
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

  if ( (byte_4C35827 & 1) == 0 )
  {
    sub_1C32C20(&QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
    byte_4C35827 = 1;
  }
  args = this->fields.args;
  v6 = (QuestBoardRewardIcon_RewardIconInfo_o *)sub_1C32E6C(QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
  QuestBoardRewardIcon_RewardIconInfo___ctor(v6, x, args, v7);
  return v6;
}


void QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1___ctor(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1___EnumerateRewardIconInfoByGiftId_b__2(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o *this,
        GiftEntity_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Int32_array *itemIds; // x19
  System_Func_int__bool__o *v10; // x20

  if ( (byte_4C35828 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2__EnumerateRewardIconInfoByGiftId_b__3__);
    sub_1C32C20(&QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_TypeInfo);
    byte_4C35828 = 1;
  }
  v5 = sub_1C32E6C(QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 16) = info;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)info, v7, v8);
  itemIds = this->fields.itemIds;
  v10 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2__EnumerateRewardIconInfoByGiftId_b__3__,
    0);
  return !BasicHelper__Any_int__51143952(
            itemIds,
            (System_Func_T__bool__o *)v10,
            (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168);
}


void QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2___ctor(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2___EnumerateRewardIconInfoByGiftId_b__3(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct GiftEntity_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1C32E7C(this);
  return info->fields.objectId == x;
}