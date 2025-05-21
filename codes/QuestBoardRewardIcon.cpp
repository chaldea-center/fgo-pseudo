// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardRewardIcon_RewardIconArgs___ctor(
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
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  bool v20; // w23
  bool v21; // w24
  bool v22; // w25
  bool v23; // w26

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v20 = isDisplayFirstOnlyReward;
  v21 = hasPhaseRewardExceptLastPhaseOnThisQuest;
  v22 = isLastReward;
  v23 = isDisplayNotGive;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._GiftIconId_k__BackingField = giftIconId;
  this->fields._GiftId_k__BackingField = giftId;
  this->fields._IsDisplayFirstOnlyReward_k__BackingField = v20;
  this->fields._Phase_k__BackingField = phase;
  this->fields._HasPhaseRewardExceptLastPhaseOnThisQuest_k__BackingField = v21;
  this->fields._IsLastReward_k__BackingField = v22;
  this->fields._Color_k__BackingField.fields.r = r;
  this->fields._Color_k__BackingField.fields.g = g;
  this->fields._Color_k__BackingField.fields.b = b;
  this->fields._Color_k__BackingField.fields.a = a;
  this->fields._IsDisplayNotGive_k__BackingField = v23;
  this->fields._IsDisplayServantLimitOpened_k__BackingField = isDisplayServantLimitOpened;
  this->fields._IsDisplayGot_k__BackingField = isDisplayGot;
}


UnityEngine_Color_o __fastcall QuestBoardRewardIcon_RewardIconArgs__get_Color(
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


int32_t __fastcall QuestBoardRewardIcon_RewardIconArgs__get_GiftIconId(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._GiftIconId_k__BackingField;
}


int32_t __fastcall QuestBoardRewardIcon_RewardIconArgs__get_GiftId(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._GiftId_k__BackingField;
}


bool __fastcall QuestBoardRewardIcon_RewardIconArgs__get_HasPhaseRewardExceptLastPhaseOnThisQuest(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._HasPhaseRewardExceptLastPhaseOnThisQuest_k__BackingField;
}


bool __fastcall QuestBoardRewardIcon_RewardIconArgs__get_IsDisplayFirstOnlyReward(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDisplayFirstOnlyReward_k__BackingField;
}


bool __fastcall QuestBoardRewardIcon_RewardIconArgs__get_IsDisplayGot(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDisplayGot_k__BackingField;
}


bool __fastcall QuestBoardRewardIcon_RewardIconArgs__get_IsDisplayNotGive(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDisplayNotGive_k__BackingField;
}


bool __fastcall QuestBoardRewardIcon_RewardIconArgs__get_IsDisplayServantLimitOpened(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDisplayServantLimitOpened_k__BackingField;
}


bool __fastcall QuestBoardRewardIcon_RewardIconArgs__get_IsLastReward(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsLastReward_k__BackingField;
}


int32_t __fastcall QuestBoardRewardIcon_RewardIconArgs__get_Phase(
        QuestBoardRewardIcon_RewardIconArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._Phase_k__BackingField;
}


void __fastcall QuestBoardRewardIcon_RewardIconInfo___ctor(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        GiftEntity_o *entity,
        QuestBoardRewardIcon_RewardIconArgs_o *args,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.args = args;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.args, (int32_t)args, v7, v8);
  if ( !entity )
    sub_1BDBAD4(v9, v10);
  this->fields._PriorIconId_k__BackingField = entity->fields.prioredIconId;
  *(_QWORD *)&this->fields._GiftType_k__BackingField = *(_QWORD *)&entity->fields.type;
  this->fields._Num_k__BackingField = entity->fields.num;
}


void __fastcall QuestBoardRewardIcon_RewardIconInfo___ctor_37527840(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        QuestBoardRewardIcon_RewardIconArgs_o *args,
        int32_t num,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t GiftIconId_k__BackingField; // w8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.args = args;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.args, (int32_t)args, v7, v8);
  if ( !args )
    sub_1BDBAD4(v9, v10);
  GiftIconId_k__BackingField = args->fields._GiftIconId_k__BackingField;
  this->fields._Num_k__BackingField = num;
  this->fields._PriorIconId_k__BackingField = GiftIconId_k__BackingField;
}


int32_t __fastcall QuestBoardRewardIcon_RewardIconInfo__GetTitleType(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BDBAD4(this, method);
  if ( args->fields._HasPhaseRewardExceptLastPhaseOnThisQuest_k__BackingField )
  {
    if ( args->fields._IsLastReward_k__BackingField )
      return 1;
    else
      return 2;
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


UnityEngine_Color_o __fastcall QuestBoardRewardIcon_RewardIconInfo__get_Color(
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
    sub_1BDBAD4(this, method);
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


int32_t __fastcall QuestBoardRewardIcon_RewardIconInfo__get_GiftType(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._GiftType_k__BackingField;
}


bool __fastcall QuestBoardRewardIcon_RewardIconInfo__get_HasPhaseRewardExceptLastPhaseOnThisQuest(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BDBAD4(this, method);
  return args->fields._HasPhaseRewardExceptLastPhaseOnThisQuest_k__BackingField;
}


bool __fastcall QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayFirstOnlyReward(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BDBAD4(this, method);
  return args->fields._IsDisplayFirstOnlyReward_k__BackingField;
}


bool __fastcall QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayGot(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BDBAD4(this, method);
  return args->fields._IsDisplayGot_k__BackingField
      && !args->fields._IsDisplayNotGive_k__BackingField
      && !args->fields._IsDisplayServantLimitOpened_k__BackingField;
}


bool __fastcall QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayNotGive(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BDBAD4(this, method);
  return args->fields._IsDisplayNotGive_k__BackingField;
}


bool __fastcall QuestBoardRewardIcon_RewardIconInfo__get_IsDisplayServantLimitOpened(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BDBAD4(this, method);
  return args->fields._IsDisplayServantLimitOpened_k__BackingField;
}


bool __fastcall QuestBoardRewardIcon_RewardIconInfo__get_IsLastReward(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BDBAD4(this, method);
  return args->fields._IsLastReward_k__BackingField;
}


int32_t __fastcall QuestBoardRewardIcon_RewardIconInfo__get_Num(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Num_k__BackingField;
}


int32_t __fastcall QuestBoardRewardIcon_RewardIconInfo__get_ObjectId(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ObjectId_k__BackingField;
}


int32_t __fastcall QuestBoardRewardIcon_RewardIconInfo__get_Phase(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  struct QuestBoardRewardIcon_RewardIconArgs_o *args; // x8

  args = this->fields.args;
  if ( !args )
    sub_1BDBAD4(this, method);
  return args->fields._Phase_k__BackingField;
}


int32_t __fastcall QuestBoardRewardIcon_RewardIconInfo__get_PriorIconId(
        QuestBoardRewardIcon_RewardIconInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._PriorIconId_k__BackingField;
}


System_Collections_Generic_IEnumerable_RewardIconInfo__o *__fastcall QuestBoardRewardIcon_RewardIconUtil__EnumerateRewardIconInfo(
        QuestBoardRewardIcon_RewardIconArgs_o *args,
        const MethodInfo *method)
{
  long double inited; // q0
  QuestBoardRewardIcon_RewardIconArgs_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_RewardIconInfo__o *v6; // x20
  QuestBoardRewardIcon_RewardIconInfo_o *v7; // x21
  const MethodInfo *v8; // x3
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  _QWORD *v12; // x19
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0

  v3 = args;
  if ( (byte_4B4298F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Empty_RewardIconInfo___, method);
    sub_1BDB878(&QuestBoardRewardIcon_RewardIconInfo___TypeInfo, v4);
    args = (QuestBoardRewardIcon_RewardIconArgs_o *)sub_1BDB878(&QuestBoardRewardIcon_RewardIconInfo_TypeInfo, v5);
    byte_4B4298F = 1;
  }
  if ( !v3 )
    goto LABEL_22;
  if ( v3->fields._GiftIconId_k__BackingField > 0 )
  {
    v6 = (System_Collections_Generic_IEnumerable_RewardIconInfo__o *)sub_1BDB920(
                                                                       QuestBoardRewardIcon_RewardIconInfo___TypeInfo,
                                                                       1LL);
    v7 = (QuestBoardRewardIcon_RewardIconInfo_o *)sub_1BDBAC4(QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
    QuestBoardRewardIcon_RewardIconInfo___ctor_37527840(v7, v3, -1, v8);
    if ( v6 )
    {
      if ( v7 )
      {
        args = (QuestBoardRewardIcon_RewardIconArgs_o *)sub_1BDB9B4(v7, v6->klass->_1.element_class);
        if ( !args )
        {
          v16 = sub_1BDBAF8();
          sub_1BDB9A0(v16, 0LL);
        }
      }
      if ( !LODWORD(v6[1].monitor) )
        sub_1BDBADC(args, method, v9);
      v6[2].klass = (System_Collections_Generic_IEnumerable_RewardIconInfo__c *)v7;
      sub_1BDB81C((CGThumbnailListItem_o *)&v6[2], (int32_t)v7, v9, v10);
      return v6;
    }
LABEL_22:
    sub_1BDBAD4(args, method);
  }
  if ( v3->fields._GiftId_k__BackingField <= 0 )
  {
    v12 = Method_System_Linq_Enumerable_Empty_RewardIconInfo___;
    v13 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_RewardIconInfo___ + 7);
    if ( !v13 )
    {
      sub_1C2BF64(Method_System_Linq_Enumerable_Empty_RewardIconInfo___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C2BF08(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C2BF08(inited);
    return **(System_Collections_Generic_IEnumerable_RewardIconInfo__o ***)(v15 + 184);
  }
  return QuestBoardRewardIcon_RewardIconUtil__EnumerateRewardIconInfoByGiftId(v3, method);
}


System_Collections_Generic_IEnumerable_RewardIconInfo__o *__fastcall QuestBoardRewardIcon_RewardIconUtil__EnumerateRewardIconInfoByGiftId(
        QuestBoardRewardIcon_RewardIconArgs_o *args,
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
  __int64 v17; // x19
  System_Int32_array *Instance; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  int32_t v23; // w20
  GiftEntity_array *GiftListById; // x0
  QuestBoardRewardIcon_RewardIconUtil___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x21
  System_Func_object__bool__o *_9__1_0; // x22
  Il2CppObject *v28; // x23
  struct QuestBoardRewardIcon_RewardIconUtil___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  __int64 v33; // x20
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Func_object__bool__o *v36; // x22
  System_Func_object__object__o *v37; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B42990 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_GiftMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMaster_GiftDetailMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_GiftEntity__RewardIconInfo___, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_GiftEntity___, v7);
    sub_1BDB878(&System_Func_GiftEntity__bool__TypeInfo, v8);
    sub_1BDB878(&System_Func_GiftEntity__RewardIconInfo__TypeInfo, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BDB878(&Method_QuestBoardRewardIcon_RewardIconUtil___c__EnumerateRewardIconInfoByGiftId_b__1_0__, v11);
    sub_1BDB878(
      &Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0__EnumerateRewardIconInfoByGiftId_b__1__,
      v12);
    sub_1BDB878(&QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_TypeInfo, v13);
    sub_1BDB878(
      &Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1__EnumerateRewardIconInfoByGiftId_b__2__,
      v14);
    sub_1BDB878(&QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_TypeInfo, v15);
    sub_1BDB878(&QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo, v16);
    byte_4B42990 = 1;
  }
  entity = 0LL;
  v17 = sub_1BDBAC4(QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_22;
  *(_QWORD *)(v17 + 16) = args;
  sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)args, v20, v21);
  v22 = *(_QWORD *)(v17 + 16);
  if ( !v22 )
    goto LABEL_22;
  v23 = *(_DWORD *)(v22 + 20);
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_Int32_array *)DataManager__GetMasterData_object_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_22;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, v23, 0LL);
  v25 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo;
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)GiftListById;
  if ( !QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo);
    v25 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v25->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1_0,
      v28,
      Method_QuestBoardRewardIcon_RewardIconUtil___c__EnumerateRewardIconInfoByGiftId_b__1_0__,
      0LL);
    static_fields = QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_GiftEntity__bool__o *)_9__1_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v30, v31);
  }
  v32 = System_Linq_Enumerable__Where_object_(
          v26,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GiftDetailMaster___);
  if ( !Instance )
    goto LABEL_22;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          v23,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_GiftDetailMaster__GiftDetailEntity__int__TryGetEntity__) )
    goto LABEL_21;
  v33 = sub_1BDBAC4(QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  Instance = (System_Int32_array *)entity;
  if ( !entity
    || (Instance = GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds((GiftDetailEntity_o *)entity, 0LL), !v33) )
  {
LABEL_22:
    sub_1BDBAD4(Instance, v19);
  }
  *(_QWORD *)(v33 + 16) = Instance;
  sub_1BDB81C((CGThumbnailListItem_o *)(v33 + 16), (int32_t)Instance, v34, v35);
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v33 + 16), 0LL) )
  {
    v36 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_GiftEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v36,
      (Il2CppObject *)v33,
      Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1__EnumerateRewardIconInfoByGiftId_b__2__,
      0LL);
    v32 = System_Linq_Enumerable__Where_object_(
            v32,
            (System_Func_TSource__bool__o *)v36,
            (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  }
LABEL_21:
  v37 = (System_Func_object__object__o *)sub_1BDBAC4(System_Func_GiftEntity__RewardIconInfo__TypeInfo);
  System_Func_object__object____ctor(
    v37,
    (Il2CppObject *)v17,
    Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0__EnumerateRewardIconInfoByGiftId_b__1__,
    0LL);
  return (System_Collections_Generic_IEnumerable_RewardIconInfo__o *)System_Linq_Enumerable__Select_object__object_(
                                                                       v32,
                                                                       (System_Func_TSource__TResult__o *)v37,
                                                                       (const MethodInfo_3068484 *)Method_System_Linq_Enumerable_Select_GiftEntity__RewardIconInfo___);
}


bool __fastcall QuestBoardRewardIcon_RewardIconUtil__IsDisplayGot(
        MapControl_QuestInfo_o *questInfo,
        UserQuestEntity_o *userQuestEnt,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *v4; // x20
  int32_t questId; // w20
  bool v6; // w8

  v4 = questInfo;
  if ( (byte_4B42993 & 1) == 0 )
  {
    questInfo = (MapControl_QuestInfo_o *)sub_1BDB878(&CondType_TypeInfo, userQuestEnt);
    byte_4B42993 = 1;
  }
  if ( !v4 )
    goto LABEL_10;
  questId = v4->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)CondType__IsQuestClear_39349364(questId, -1, 0, 0LL);
  v6 = 0;
  if ( ((unsigned __int8)questInfo & 1) != 0 )
  {
    if ( userQuestEnt )
      return !UserQuestEntity__HasStatus(userQuestEnt, 4, 0LL);
LABEL_10:
    sub_1BDBAD4(questInfo, userQuestEnt);
  }
  return v6;
}


bool __fastcall QuestBoardRewardIcon_RewardIconUtil__IsDisplayNotGive(
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *v2; // x20
  __int64 v3; // x1
  int32_t questId; // w19
  int32_t QuestPhaseStart1Clamped; // w20

  v2 = questInfo;
  if ( (byte_4B42992 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    questInfo = (MapControl_QuestInfo_o *)sub_1BDB878(&DataManager_TypeInfo, v3);
    byte_4B42992 = 1;
  }
  if ( !v2 )
    goto LABEL_8;
  questId = v2->fields.questId;
  QuestPhaseStart1Clamped = MapControl_QuestInfo__GetQuestPhaseStart1Clamped(v2, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !questInfo )
LABEL_8:
    sub_1BDBAD4(questInfo, method);
  return QuestBehaviorMaster__IsOpenQuestBehaviorCond(
           (QuestBehaviorMaster_o *)questInfo,
           questId,
           QuestPhaseStart1Clamped,
           5,
           0LL);
}


bool __fastcall QuestBoardRewardIcon_RewardIconUtil__IsDisplayServantLimitOpened(
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  MapControl_QuestInfo_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t questId; // w19
  int32_t QuestPhaseStart1Clamped; // w20
  Il2CppObject *Master_object; // x21

  v2 = questInfo;
  if ( (byte_4B42991 & 1) == 0 )
  {
    sub_1BDB878(&CondType_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4);
    questInfo = (MapControl_QuestInfo_o *)sub_1BDB878(&DataManager_TypeInfo, v5);
    byte_4B42991 = 1;
  }
  if ( !v2 )
    goto LABEL_16;
  questId = v2->fields.questId;
  QuestPhaseStart1Clamped = MapControl_QuestInfo__GetQuestPhaseStart1Clamped(v2, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)CondType__IsQuestClear_39349364(questId, -1, 0, 0LL);
  if ( ((unsigned __int8)questInfo & 1) != 0 )
  {
    if ( !Master_object )
      goto LABEL_16;
    if ( ServantLimitImageMaster__IsLimitCountSealQuest((ServantLimitImageMaster_o *)Master_object, questId, 0LL) )
      return 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  questInfo = (MapControl_QuestInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !questInfo )
LABEL_16:
    sub_1BDBAD4(questInfo, method);
  return QuestBehaviorMaster__IsOpenQuestBehaviorCond(
           (QuestBehaviorMaster_o *)questInfo,
           questId,
           QuestPhaseStart1Clamped,
           10,
           0LL);
}


void __fastcall QuestBoardRewardIcon_RewardIconUtil___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B42994 & 1) == 0 )
  {
    sub_1BDB878(&QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo, v1);
    byte_4B42994 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->static_fields->__9 = (struct QuestBoardRewardIcon_RewardIconUtil___c_o *)v2;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)QuestBoardRewardIcon_RewardIconUtil___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall QuestBoardRewardIcon_RewardIconUtil___c___ctor(
        QuestBoardRewardIcon_RewardIconUtil___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardRewardIcon_RewardIconUtil___c___EnumerateRewardIconInfoByGiftId_b__1_0(
        QuestBoardRewardIcon_RewardIconUtil___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BDBAD4(this, 0LL);
  return ent->fields.type != 15;
}


void __fastcall QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0___ctor(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestBoardRewardIcon_RewardIconInfo_o *__fastcall QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0___EnumerateRewardIconInfoByGiftId_b__1(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_0_o *this,
        GiftEntity_o *x,
        const MethodInfo *method)
{
  QuestBoardRewardIcon_RewardIconArgs_o *args; // x20
  QuestBoardRewardIcon_RewardIconInfo_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_4B42995 & 1) == 0 )
  {
    sub_1BDB878(&QuestBoardRewardIcon_RewardIconInfo_TypeInfo, x);
    byte_4B42995 = 1;
  }
  args = this->fields.args;
  v6 = (QuestBoardRewardIcon_RewardIconInfo_o *)sub_1BDBAC4(QuestBoardRewardIcon_RewardIconInfo_TypeInfo);
  QuestBoardRewardIcon_RewardIconInfo___ctor(v6, x, args, v7);
  return v6;
}


void __fastcall QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1___ctor(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1___EnumerateRewardIconInfoByGiftId_b__2(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_1_o *this,
        GiftEntity_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Int32_array *itemIds; // x19
  System_Func_int__bool__o *v14; // x20

  if ( (byte_4B42996 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Any_int____77076928, info);
    sub_1BDB878(&System_Func_int__bool__TypeInfo, v5);
    sub_1BDB878(
      &Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2__EnumerateRewardIconInfoByGiftId_b__3__,
      v6);
    sub_1BDB878(&QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_TypeInfo, v7);
    byte_4B42996 = 1;
  }
  v8 = sub_1BDBAC4(QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BDBAD4(v9, v10);
  *(_QWORD *)(v8 + 16) = info;
  sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)info, v11, v12);
  itemIds = this->fields.itemIds;
  v14 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2__EnumerateRewardIconInfoByGiftId_b__3__,
    0LL);
  return !BasicHelper__Any_int__50449276(
            itemIds,
            (System_Func_T__bool__o *)v14,
            (const MethodInfo_301CB7C *)Method_BasicHelper_Any_int____77076928);
}


void __fastcall QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2___ctor(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2___EnumerateRewardIconInfoByGiftId_b__3(
        QuestBoardRewardIcon_RewardIconUtil___c__DisplayClass1_2_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct GiftEntity_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1BDBAD4(this, x);
  return info->fields.objectId == x;
}