void BattleLogicClassRelation___ctor(BattleLogicClassRelation_o *this, const MethodInfo *method)
{
  struct BattleLogicClassRelation_Process_array *v3; // x20
  Il2CppObject *v4; // x21
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x0

  if ( (byte_4C46022 & 1) == 0 )
  {
    sub_1C37058(&BattleLogicClassRelation_AttackOverwriteProcess_TypeInfo);
    sub_1C37058(&BattleLogicClassRelation_DefenseOverwriteProcess_TypeInfo);
    sub_1C37058(&BattleLogicClassRelation_OldAttackOverwriteProcess_TypeInfo);
    sub_1C37058(&BattleLogicClassRelation_OldDefenseOverwriteProcess_TypeInfo);
    sub_1C37058(&BattleLogicClassRelation_Process___TypeInfo);
    byte_4C46022 = 1;
  }
  v3 = (struct BattleLogicClassRelation_Process_array *)sub_1C37100(BattleLogicClassRelation_Process___TypeInfo, 4);
  v4 = (Il2CppObject *)sub_1C372A4(BattleLogicClassRelation_OldAttackOverwriteProcess_TypeInfo);
  System_Object___ctor(v4, 0);
  if ( !v3 )
    sub_1C372B4(v5);
  if ( v4 )
  {
    v5 = sub_1C37194(v4, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_18;
  }
  if ( !LODWORD(v3->max_length) )
    goto LABEL_17;
  v3->m_Items[0] = (BattleLogicClassRelation_Process_o *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)v3->m_Items, (int32_t)v4, v6, v7);
  v8 = (Il2CppObject *)sub_1C372A4(BattleLogicClassRelation_OldDefenseOverwriteProcess_TypeInfo);
  System_Object___ctor(v8, 0);
  if ( v8 )
  {
    v5 = sub_1C37194(v8, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_18;
  }
  if ( LODWORD(v3->max_length) <= 1 )
    goto LABEL_17;
  v3->m_Items[1] = (BattleLogicClassRelation_Process_o *)v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[1], (int32_t)v8, v9, v10);
  v11 = (Il2CppObject *)sub_1C372A4(BattleLogicClassRelation_AttackOverwriteProcess_TypeInfo);
  System_Object___ctor(v11, 0);
  if ( v11 )
  {
    v5 = sub_1C37194(v11, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_18;
  }
  if ( LODWORD(v3->max_length) <= 2 )
    goto LABEL_17;
  v3->m_Items[2] = (BattleLogicClassRelation_Process_o *)v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[2], (int32_t)v11, v12, v13);
  v14 = (Il2CppObject *)sub_1C372A4(BattleLogicClassRelation_DefenseOverwriteProcess_TypeInfo);
  System_Object___ctor(v14, 0);
  if ( v14 )
  {
    v5 = sub_1C37194(v14, v3->obj.klass->_1.element_class);
    if ( !v5 )
    {
LABEL_18:
      v19 = sub_1C372D8(v5);
      sub_1C37180(v19, 0);
    }
  }
  if ( LODWORD(v3->max_length) <= 3 )
LABEL_17:
    sub_1C372BC(v5);
  v3->m_Items[3] = (BattleLogicClassRelation_Process_o *)v14;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[3], (int32_t)v14, v15, v16);
  this->fields._procArray = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v17, v18);
  System_Object___ctor((Il2CppObject *)this, 0);
}


ClassRelationOverwriteMaster_o *BattleLogicClassRelation__get_OverwriteMst(
        BattleLogicClassRelation_o *this,
        const MethodInfo *method)
{
  ClassRelationOverwriteMaster_o *result; // x0
  CGThumbnailListItem_o *p_overwriteMst; // x19
  ClassRelationOverwriteMaster_o *overwriteMst; // t1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C46021 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ClassRelationOverwriteMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46021 = 1;
  }
  overwriteMst = this->fields._overwriteMst;
  p_overwriteMst = (CGThumbnailListItem_o *)&this->fields._overwriteMst;
  result = overwriteMst;
  if ( !overwriteMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ClassRelationOverwriteMaster___);
    p_overwriteMst->klass = (CGThumbnailListItem_c *)MasterData_object;
    sub_1C36FFC(p_overwriteMst, (int32_t)MasterData_object, v8, v9);
    return (ClassRelationOverwriteMaster_o *)p_overwriteMst->klass;
  }
  return result;
}


BattleLogicClassRelation_ResultData_o *BattleLogicClassRelation__proc(
        BattleLogicClassRelation_o *this,
        BattleLogicClassRelation_Argument_o *arg,
        const MethodInfo *method)
{
  BattleLogicClassRelation_o *v4; // x20
  struct BattleLogicClassRelation_Process_array *procArray; // x22
  int max_length; // w8
  BattleLogicClassRelation_ResultData_o *v7; // x21
  unsigned int v8; // w23

  if ( !arg )
    goto LABEL_10;
  v4 = this;
  this = (BattleLogicClassRelation_o *)((__int64 (__fastcall *)(BattleLogicClassRelation_Argument_o *, const MethodInfo *, const MethodInfo *))arg->klass->vtable._4_initResultData.methodPtr)(
                                         arg,
                                         arg->klass->vtable._4_initResultData.method,
                                         method);
  procArray = v4->fields._procArray;
  if ( !procArray )
    goto LABEL_10;
  max_length = procArray->max_length;
  v7 = (BattleLogicClassRelation_ResultData_o *)this;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C372BC(this);
      this = (BattleLogicClassRelation_o *)procArray->m_Items[v8];
      if ( !this )
        break;
      this = (BattleLogicClassRelation_o *)((__int64 (__fastcall *)(BattleLogicClassRelation_o *, BattleLogicClassRelation_o *, BattleLogicClassRelation_Argument_o *, BattleLogicClassRelation_ResultData_o *, void *))this->klass[1]._1.image)(
                                             this,
                                             v4,
                                             arg,
                                             v7,
                                             this->klass[1]._1.gc_desc);
      max_length = procArray->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_8;
    }
LABEL_10:
    sub_1C372B4(this);
  }
LABEL_8:
  if ( !v7 )
    goto LABEL_10;
  ((void (__fastcall *)(BattleLogicClassRelation_ResultData_o *, const MethodInfo *))v7->klass->vtable._4_fixResult.methodPtr)(
    v7,
    v7->klass->vtable._4_fixResult.method);
  return v7;
}


void BattleLogicClassRelation_Argument___ctor(
        BattleLogicClassRelation_Argument_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *attackSvt,
        BattleServantData_o *defenseSvt,
        bool isAct,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BattleServantData_o *atkSvt; // x0
  BattleServantData_o *defSvt; // x8
  ServantClassMaster_o *v19; // x20
  int32_t RelationId; // w0
  int32_t defClassId; // w1

  if ( (byte_4C46023 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46023 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.command = command;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)command, v11, v12);
  this->fields.atkSvt = attackSvt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.atkSvt, (int32_t)attackSvt, v13, v14);
  this->fields.defSvt = defenseSvt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defSvt, (int32_t)defenseSvt, v15, v16);
  this->fields.isAction = isAct;
  atkSvt = this->fields.atkSvt;
  if ( !atkSvt
    || (atkSvt = (BattleServantData_o *)BattleServantData__getBattleClassId(
                                          atkSvt,
                                          command,
                                          this->fields.defSvt,
                                          isAct,
                                          1,
                                          0),
        defSvt = this->fields.defSvt,
        this->fields.atkClassId = (int)atkSvt,
        !defSvt)
    || (this->fields.defClassId = BattleServantData__getBattleClassId(defSvt, command, this->fields.atkSvt, isAct, 0, 0),
        (atkSvt = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (atkSvt = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)atkSvt,
                                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0 )
  {
    sub_1C372B4(atkSvt);
  }
  v19 = (ServantClassMaster_o *)atkSvt;
  RelationId = ServantClassMaster__getRelationId((ServantClassMaster_o *)atkSvt, this->fields.atkClassId, 0);
  defClassId = this->fields.defClassId;
  this->fields.atkRelationId = RelationId;
  this->fields.defRelationId = ServantClassMaster__getRelationId(v19, defClassId, 0);
}


BattleLogicClassRelation_ResultData_o *BattleLogicClassRelation_Argument__initResultData(
        BattleLogicClassRelation_Argument_o *this,
        const MethodInfo *method)
{
  BattleLogicClassRelation_ResultData_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C46024 & 1) == 0 )
  {
    sub_1C37058(&BattleLogicClassRelation_ResultData_TypeInfo);
    byte_4C46024 = 1;
  }
  v3 = (BattleLogicClassRelation_ResultData_o *)sub_1C372A4(BattleLogicClassRelation_ResultData_TypeInfo);
  BattleLogicClassRelation_ResultData___ctor(v3, this, v4);
  return v3;
}


void BattleLogicClassRelation_AttackOverwriteProcess___ctor(
        BattleLogicClassRelation_AttackOverwriteProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicClassRelation_AttackOverwriteProcess__execLocal(
        BattleLogicClassRelation_AttackOverwriteProcess_o *this,
        BattleLogicClassRelation_o *logic,
        BattleLogicClassRelation_Argument_o *arg,
        BattleLogicClassRelation_ResultData_o *result,
        const MethodInfo *method)
{
  BattleLogicClassRelation_OverwriteProcess_o *v6; // x21
  BattleLogicClassRelation_DamageRateData_o *AtkRateData_k__BackingField; // x22
  BattleBuffData_BuffData_array *BuffOverwriteClassRelationArray; // x4
  const MethodInfo *v10; // x5

  if ( !result
    || !arg
    || (v6 = (BattleLogicClassRelation_OverwriteProcess_o *)this,
        (this = (BattleLogicClassRelation_AttackOverwriteProcess_o *)arg->fields.atkSvt) == 0) )
  {
    sub_1C372B4(this);
  }
  AtkRateData_k__BackingField = result->fields._AtkRateData_k__BackingField;
  BuffOverwriteClassRelationArray = BattleServantData__getBuffOverwriteClassRelationArray(
                                      (BattleServantData_o *)this,
                                      arg->fields.command,
                                      arg->fields.defSvt,
                                      0,
                                      0);
  BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate(
    v6,
    logic,
    arg,
    AtkRateData_k__BackingField,
    BuffOverwriteClassRelationArray,
    v10);
}


bool BattleLogicClassRelation_AttackOverwriteProcess__get_IsAtkSide(
        BattleLogicClassRelation_AttackOverwriteProcess_o *this,
        const MethodInfo *method)
{
  return 1;
}


void BattleLogicClassRelation_DamageRateData___ctor(
        BattleLogicClassRelation_DamageRateData_o *this,
        BattleLogicClassRelation_ResultData_o *result,
        const MethodInfo *method)
{
  BattleLogicClassRelation_DamageRateData_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v4->fields._Result_k__BackingField = result;
  v4 = (BattleLogicClassRelation_DamageRateData_o *)((char *)v4 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)v4, (int32_t)result, v5, v6);
  v4->monitor = (void *)0xFFFFFFFFLL;
  LODWORD(v4->fields._Result_k__BackingField) = -1;
  BYTE4(v4->fields._Result_k__BackingField) = 0;
}


float BattleLogicClassRelation_DamageRateData__getFixRate(
        BattleLogicClassRelation_DamageRateData_o *this,
        float rate,
        const MethodInfo *method)
{
  struct BattleLogicClassRelation_Process_o *proc; // x0
  float Value_k__BackingField; // s8

  proc = this->fields._proc;
  if ( proc )
  {
    Value_k__BackingField = this->fields._Value_k__BackingField;
    rate = ((float (__fastcall *)(struct BattleLogicClassRelation_Process_o *, BattleLogicClassRelation_DamageRateData_o *, const MethodInfo *, float))proc->klass->vtable._5_getFixRate.methodPtr)(
             proc,
             this,
             proc->klass->vtable._5_getFixRate.method,
             rate);
    this->fields._Value_k__BackingField = rate;
    this->fields._IsInvoked_k__BackingField = rate == Value_k__BackingField;
  }
  return rate;
}


int32_t BattleLogicClassRelation_DamageRateData__get_GeneralType(
        BattleLogicClassRelation_DamageRateData_o *this,
        const MethodInfo *method)
{
  return this->fields._GeneralType_k__BackingField;
}


bool BattleLogicClassRelation_DamageRateData__get_IsAction(
        BattleLogicClassRelation_DamageRateData_o *this,
        const MethodInfo *method)
{
  return this->fields._proc != 0;
}


bool BattleLogicClassRelation_DamageRateData__get_IsInvoked(
        BattleLogicClassRelation_DamageRateData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsInvoked_k__BackingField;
}


int32_t BattleLogicClassRelation_DamageRateData__get_Priority(
        BattleLogicClassRelation_DamageRateData_o *this,
        const MethodInfo *method)
{
  return this->fields._Priority_k__BackingField;
}


BattleLogicClassRelation_ResultData_o *BattleLogicClassRelation_DamageRateData__get_Result(
        BattleLogicClassRelation_DamageRateData_o *this,
        const MethodInfo *method)
{
  return this->fields._Result_k__BackingField;
}


float BattleLogicClassRelation_DamageRateData__get_Value(
        BattleLogicClassRelation_DamageRateData_o *this,
        const MethodInfo *method)
{
  return this->fields._Value_k__BackingField;
}


void BattleLogicClassRelation_DamageRateData__set_GeneralType(
        BattleLogicClassRelation_DamageRateData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GeneralType_k__BackingField = value;
}


void BattleLogicClassRelation_DamageRateData__set_IsInvoked(
        BattleLogicClassRelation_DamageRateData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsInvoked_k__BackingField = value;
}


void BattleLogicClassRelation_DamageRateData__set_Priority(
        BattleLogicClassRelation_DamageRateData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Priority_k__BackingField = value;
}


void BattleLogicClassRelation_DamageRateData__set_Result(
        BattleLogicClassRelation_DamageRateData_o *this,
        BattleLogicClassRelation_ResultData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Result_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicClassRelation_DamageRateData__set_Value(
        BattleLogicClassRelation_DamageRateData_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._Value_k__BackingField = value;
}


bool BattleLogicClassRelation_DamageRateData__updateValue(
        BattleLogicClassRelation_DamageRateData_o *this,
        int32_t priority,
        float value,
        int32_t type,
        BattleLogicClassRelation_Process_o *proc,
        const MethodInfo *method)
{
  int32_t Priority_k__BackingField; // w20
  struct BattleLogicClassRelation_Process_o **p_proc; // x0

  Priority_k__BackingField = this->fields._Priority_k__BackingField;
  if ( Priority_k__BackingField < priority )
  {
    this->fields._proc = proc;
    p_proc = &this->fields._proc;
    *((_DWORD *)p_proc - 4) = priority;
    *((float *)p_proc - 3) = value;
    *((_DWORD *)p_proc - 2) = type;
    sub_1C36FFC((CGThumbnailListItem_o *)p_proc, (int32_t)proc, type, (const MethodInfo *)proc);
  }
  return Priority_k__BackingField < priority;
}


void BattleLogicClassRelation_DefenseOverwriteProcess___ctor(
        BattleLogicClassRelation_DefenseOverwriteProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicClassRelation_DefenseOverwriteProcess__execLocal(
        BattleLogicClassRelation_DefenseOverwriteProcess_o *this,
        BattleLogicClassRelation_o *logic,
        BattleLogicClassRelation_Argument_o *arg,
        BattleLogicClassRelation_ResultData_o *result,
        const MethodInfo *method)
{
  BattleLogicClassRelation_OverwriteProcess_o *v6; // x21
  BattleLogicClassRelation_DamageRateData_o *DefRateData_k__BackingField; // x22
  BattleBuffData_BuffData_array *BuffOverwriteClassRelationArray; // x4
  const MethodInfo *v10; // x5

  if ( !result
    || !arg
    || (v6 = (BattleLogicClassRelation_OverwriteProcess_o *)this,
        (this = (BattleLogicClassRelation_DefenseOverwriteProcess_o *)arg->fields.defSvt) == 0) )
  {
    sub_1C372B4(this);
  }
  DefRateData_k__BackingField = result->fields._DefRateData_k__BackingField;
  BuffOverwriteClassRelationArray = BattleServantData__getBuffOverwriteClassRelationArray(
                                      (BattleServantData_o *)this,
                                      arg->fields.command,
                                      arg->fields.atkSvt,
                                      0,
                                      0);
  BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate(
    v6,
    logic,
    arg,
    DefRateData_k__BackingField,
    BuffOverwriteClassRelationArray,
    v10);
}


bool BattleLogicClassRelation_DefenseOverwriteProcess__get_IsAtkSide(
        BattleLogicClassRelation_DefenseOverwriteProcess_o *this,
        const MethodInfo *method)
{
  return 0;
}


void BattleLogicClassRelation_OldAttackOverwriteProcess___ctor(
        BattleLogicClassRelation_OldAttackOverwriteProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicClassRelation_OldAttackOverwriteProcess__exec(
        BattleLogicClassRelation_OldAttackOverwriteProcess_o *this,
        BattleLogicClassRelation_o *logic,
        BattleLogicClassRelation_Argument_o *arg,
        BattleLogicClassRelation_ResultData_o *result,
        const MethodInfo *method)
{
  BattleLogicClassRelation_OldAttackOverwriteProcess_o *v7; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BattleLogicClassRelation_DamageRateData_o *AtkRateData_k__BackingField; // x20
  int32_t v11; // w8
  float v12; // s0
  float val; // [xsp+Ch] [xbp-24h] BYREF

  v7 = this;
  if ( (byte_4C46028 & 1) == 0 )
  {
    this = (BattleLogicClassRelation_OldAttackOverwriteProcess_o *)sub_1C37058(&BattleDataDefine_TypeInfo);
    byte_4C46028 = 1;
  }
  val = 0.0;
  if ( !arg )
    goto LABEL_13;
  this = (BattleLogicClassRelation_OldAttackOverwriteProcess_o *)arg->fields.atkSvt;
  if ( !this )
    goto LABEL_13;
  this = (BattleLogicClassRelation_OldAttackOverwriteProcess_o *)BattleServantData__isBuffClassRelatioAtk(
                                                                   (BattleServantData_o *)this,
                                                                   arg->fields.command,
                                                                   arg->fields.defSvt,
                                                                   &val,
                                                                   arg->fields.isAction,
                                                                   0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !result )
    goto LABEL_13;
  AtkRateData_k__BackingField = result->fields._AtkRateData_k__BackingField;
  this = (BattleLogicClassRelation_OldAttackOverwriteProcess_o *)BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    this = (BattleLogicClassRelation_OldAttackOverwriteProcess_o *)BattleDataDefine_TypeInfo;
  }
  if ( !AtkRateData_k__BackingField )
LABEL_13:
    sub_1C372B4(this);
  v11 = *(_DWORD *)this[11].monitor;
  if ( AtkRateData_k__BackingField->fields._Priority_k__BackingField < v11 )
  {
    v12 = val;
    AtkRateData_k__BackingField->fields._proc = (struct BattleLogicClassRelation_Process_o *)v7;
    AtkRateData_k__BackingField->fields._Priority_k__BackingField = v11;
    AtkRateData_k__BackingField->fields._Value_k__BackingField = v12;
    AtkRateData_k__BackingField->fields._GeneralType_k__BackingField = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&AtkRateData_k__BackingField->fields._proc, (int32_t)v7, v8, v9);
  }
}


void BattleLogicClassRelation_OldDefenseOverwriteProcess___ctor(
        BattleLogicClassRelation_OldDefenseOverwriteProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicClassRelation_OldDefenseOverwriteProcess__exec(
        BattleLogicClassRelation_OldDefenseOverwriteProcess_o *this,
        BattleLogicClassRelation_o *logic,
        BattleLogicClassRelation_Argument_o *arg,
        BattleLogicClassRelation_ResultData_o *result,
        const MethodInfo *method)
{
  BattleLogicClassRelation_OldDefenseOverwriteProcess_o *v7; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BattleLogicClassRelation_DamageRateData_o *DefRateData_k__BackingField; // x20
  int32_t v11; // w8
  float v12; // s0
  float val; // [xsp+Ch] [xbp-24h] BYREF

  v7 = this;
  if ( (byte_4C46029 & 1) == 0 )
  {
    this = (BattleLogicClassRelation_OldDefenseOverwriteProcess_o *)sub_1C37058(&BattleDataDefine_TypeInfo);
    byte_4C46029 = 1;
  }
  val = 0.0;
  if ( !arg )
    goto LABEL_13;
  this = (BattleLogicClassRelation_OldDefenseOverwriteProcess_o *)arg->fields.defSvt;
  if ( !this )
    goto LABEL_13;
  this = (BattleLogicClassRelation_OldDefenseOverwriteProcess_o *)BattleServantData__isBuffClassRelatioDef(
                                                                    (BattleServantData_o *)this,
                                                                    arg->fields.command,
                                                                    arg->fields.atkSvt,
                                                                    &val,
                                                                    arg->fields.isAction,
                                                                    0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !result )
    goto LABEL_13;
  DefRateData_k__BackingField = result->fields._DefRateData_k__BackingField;
  this = (BattleLogicClassRelation_OldDefenseOverwriteProcess_o *)BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    this = (BattleLogicClassRelation_OldDefenseOverwriteProcess_o *)BattleDataDefine_TypeInfo;
  }
  if ( !DefRateData_k__BackingField )
LABEL_13:
    sub_1C372B4(this);
  v11 = *((_DWORD *)this[11].monitor + 1);
  if ( DefRateData_k__BackingField->fields._Priority_k__BackingField < v11 )
  {
    v12 = val;
    DefRateData_k__BackingField->fields._proc = (struct BattleLogicClassRelation_Process_o *)v7;
    DefRateData_k__BackingField->fields._Priority_k__BackingField = v11;
    DefRateData_k__BackingField->fields._Value_k__BackingField = v12;
    DefRateData_k__BackingField->fields._GeneralType_k__BackingField = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&DefRateData_k__BackingField->fields._proc, (int32_t)v7, v8, v9);
  }
}


void BattleLogicClassRelation_OverwriteProcess___ctor(
        BattleLogicClassRelation_OverwriteProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleLogicClassRelation_OverwriteProcess___overwriteDamageRate_b__4_0(
        BattleLogicClassRelation_OverwriteProcess_o *this,
        BattleBuffData_BuffData_o *b1,
        BattleBuffData_BuffData_o *b2,
        const MethodInfo *method)
{
  __int64 v6; // x0

  v6 = ((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, void *, BattleBuffData_BuffData_o *, const MethodInfo *))this->klass[1]._1.image)(
         this,
         this->klass[1]._1.gc_desc,
         b2,
         method);
  if ( !b1 )
    sub_1C372B4(v6);
  return BattleBuffData_BuffData__checkRelationOrder(b1, b2, v6 & 1, 0);
}


void BattleLogicClassRelation_OverwriteProcess__exec(
        BattleLogicClassRelation_OverwriteProcess_o *this,
        BattleLogicClassRelation_o *logic,
        BattleLogicClassRelation_Argument_o *arg,
        BattleLogicClassRelation_ResultData_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, BattleLogicClassRelation_o *, BattleLogicClassRelation_Argument_o *, BattleLogicClassRelation_ResultData_o *, const char *))this->klass[1]._1.name)(
    this,
    logic,
    arg,
    result,
    this->klass[1]._1.namespaze);
}


float BattleLogicClassRelation_OverwriteProcess__getFixRate(
        BattleLogicClassRelation_OverwriteProcess_o *this,
        BattleLogicClassRelation_DamageRateData_o *self,
        float compRate,
        const MethodInfo *method)
{
  int32_t GeneralType_k__BackingField; // w8

  if ( !self )
    sub_1C372B4(this);
  GeneralType_k__BackingField = self->fields._GeneralType_k__BackingField;
  if ( GeneralType_k__BackingField == 2 )
  {
    if ( self->fields._Value_k__BackingField > compRate )
      return self->fields._Value_k__BackingField;
  }
  else if ( GeneralType_k__BackingField == 1 )
  {
    if ( self->fields._Value_k__BackingField < compRate )
      return self->fields._Value_k__BackingField;
  }
  else
  {
    return self->fields._Value_k__BackingField;
  }
  return compRate;
}


void BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate(
        BattleLogicClassRelation_OverwriteProcess_o *this,
        BattleLogicClassRelation_o *logic,
        BattleLogicClassRelation_Argument_o *arg,
        BattleLogicClassRelation_DamageRateData_o *damageRate,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  System_Comparison_T__o *v11; // x24
  ClassRelationOverwriteMaster_o *OverwriteMst; // x0
  const MethodInfo *v13; // x1
  int max_length; // w8
  unsigned int v15; // w28
  BattleBuffData_BuffData_o *v16; // x24
  BattleBuffData_RelationOverwriteData_o *relationOverwrite; // x25
  int32_t id; // w27
  ClassRelationOverwriteMaster_o *v19; // x26
  char v20; // w0
  int32_t v21; // w25
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  float Rate; // s0
  int32_t type; // w8
  __int64 v26; // x8
  __int64 v27; // x8
  ClassRelationOverwriteEntity_o *outEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C46027 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Sort_BattleBuffData_BuffData___);
    sub_1C37058(&System_Comparison_BattleBuffData_BuffData__TypeInfo);
    sub_1C37058(&Method_BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate_b__4_0__);
    byte_4C46027 = 1;
  }
  v11 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_BattleBuffData_BuffData__TypeInfo);
  System_Comparison_object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate_b__4_0__,
    0);
  System_Array__Sort_object__51069808(
    (System_Object_array *)buffArray,
    v11,
    (const MethodInfo_30B4370 *)Method_System_Array_Sort_BattleBuffData_BuffData___);
  outEnt = 0;
  if ( !buffArray )
    goto LABEL_26;
  max_length = buffArray->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1C372BC(OverwriteMst);
      v16 = buffArray->m_Items[v15];
      if ( !v16 )
        goto LABEL_26;
      if ( !logic )
        goto LABEL_26;
      relationOverwrite = v16->fields.relationOverwrite;
      OverwriteMst = BattleLogicClassRelation__get_OverwriteMst(logic, v13);
      if ( !relationOverwrite )
        goto LABEL_26;
      id = relationOverwrite->fields.id;
      v19 = OverwriteMst;
      OverwriteMst = (ClassRelationOverwriteMaster_o *)((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, void *))this->klass[1]._1.image)(
                                                         this,
                                                         this->klass[1]._1.gc_desc);
      if ( !arg || !v19 )
        goto LABEL_26;
      OverwriteMst = (ClassRelationOverwriteMaster_o *)ClassRelationOverwriteMaster__getEntity(
                                                         v19,
                                                         &outEnt,
                                                         id,
                                                         (unsigned __int8)OverwriteMst & 1,
                                                         arg->fields.atkRelationId,
                                                         arg->fields.defRelationId,
                                                         0);
      if ( ((unsigned __int8)OverwriteMst & 1) != 0 )
      {
        v20 = ((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, void *))this->klass[1]._1.image)(
                this,
                this->klass[1]._1.gc_desc);
        OverwriteMst = (ClassRelationOverwriteMaster_o *)BattleBuffData_RelationOverwriteData__getPriority(
                                                           relationOverwrite,
                                                           v20 & 1,
                                                           0);
        if ( !outEnt )
          goto LABEL_26;
        v21 = (int)OverwriteMst;
        Rate = ClassRelationOverwriteEntity__getRate(outEnt, 0);
        if ( !outEnt || !damageRate )
          goto LABEL_26;
        if ( damageRate->fields._Priority_k__BackingField < v21 )
          break;
      }
      max_length = buffArray->max_length;
      if ( (int)++v15 >= max_length )
        return;
    }
    type = outEnt->fields.type;
    damageRate->fields._proc = (struct BattleLogicClassRelation_Process_o *)this;
    damageRate->fields._Priority_k__BackingField = v21;
    damageRate->fields._Value_k__BackingField = Rate;
    damageRate->fields._GeneralType_k__BackingField = type;
    sub_1C36FFC((CGThumbnailListItem_o *)&damageRate->fields._proc, (int32_t)this, v22, v23);
    if ( arg->fields.isAction )
    {
      OverwriteMst = (ClassRelationOverwriteMaster_o *)((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, void *))this->klass[1]._1.image)(
                                                         this,
                                                         this->klass[1]._1.gc_desc);
      v26 = 32;
      if ( ((unsigned __int8)OverwriteMst & 1) != 0 )
        v26 = 24;
      v27 = *(__int64 *)((char *)&arg->klass + v26);
      if ( v27 )
      {
        OverwriteMst = *(ClassRelationOverwriteMaster_o **)(v27 + 816);
        if ( OverwriteMst )
        {
          BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)OverwriteMst, v16, arg->fields.isAction, 0);
          return;
        }
      }
LABEL_26:
      sub_1C372B4(OverwriteMst);
    }
  }
}


void BattleLogicClassRelation_Process___ctor(BattleLogicClassRelation_Process_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float BattleLogicClassRelation_Process__getFixRate(
        BattleLogicClassRelation_Process_o *this,
        BattleLogicClassRelation_DamageRateData_o *self,
        float compRate,
        const MethodInfo *method)
{
  if ( !self )
    sub_1C372B4(this);
  return self->fields._Value_k__BackingField;
}


void BattleLogicClassRelation_ResultData___ctor(
        BattleLogicClassRelation_ResultData_o *this,
        BattleLogicClassRelation_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct BattleLogicClassRelation_DamageRateData_o **p_DefRateData_k__BackingField; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C46025 & 1) == 0 )
  {
    sub_1C37058(&BattleLogicClassRelation_DamageRateData_TypeInfo);
    byte_4C46025 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !arg )
    sub_1C372B4(v5);
  this->fields._BaseRate_k__BackingField = ClassRelationMaster__getRate(
                                             arg->fields.atkRelationId,
                                             arg->fields.defRelationId,
                                             0);
  v6 = sub_1C372A4(BattleLogicClassRelation_DamageRateData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_QWORD *)(v6 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)this, v7, v8);
  *(_BYTE *)(v6 + 36) = 0;
  *(_QWORD *)(v6 + 24) = 0xFFFFFFFFLL;
  *(_DWORD *)(v6 + 32) = -1;
  this->fields._AtkRateData_k__BackingField = (struct BattleLogicClassRelation_DamageRateData_o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._AtkRateData_k__BackingField, v6, v9, v10);
  v11 = sub_1C372A4(BattleLogicClassRelation_DamageRateData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_QWORD *)(v11 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v11 + 24) = 0xFFFFFFFFLL;
  *(_DWORD *)(v11 + 32) = -1;
  *(_BYTE *)(v11 + 36) = 0;
  this->fields._DefRateData_k__BackingField = (struct BattleLogicClassRelation_DamageRateData_o *)v11;
  p_DefRateData_k__BackingField = &this->fields._DefRateData_k__BackingField;
  sub_1C36FFC((CGThumbnailListItem_o *)p_DefRateData_k__BackingField, v11, v15, v16);
  *((_DWORD *)p_DefRateData_k__BackingField + 2) = 1065353216;
}


void BattleLogicClassRelation_ResultData__fixResult(
        BattleLogicClassRelation_ResultData_o *this,
        const MethodInfo *method)
{
  bool IsPriorAttack; // w21
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  BattleLogicClassRelation_DamageRateData_array *v7; // x20
  struct BattleLogicClassRelation_DamageRateData_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct BattleLogicClassRelation_DamageRateData_o *DefRateData_k__BackingField; // x21
  struct BattleLogicClassRelation_DamageRateData_o *AtkRateData_k__BackingField; // x21
  const MethodInfo *v13; // x2
  __int64 v14; // x0

  if ( (byte_4C46026 & 1) == 0 )
  {
    sub_1C37058(&BattleLogicClassRelation_DamageRateData___TypeInfo);
    byte_4C46026 = 1;
  }
  IsPriorAttack = BattleLogicClassRelation_ResultData__get_IsPriorAttack(this, method);
  v4 = sub_1C37100(BattleLogicClassRelation_DamageRateData___TypeInfo, 2);
  v7 = (BattleLogicClassRelation_DamageRateData_array *)v4;
  if ( !IsPriorAttack )
  {
    if ( v4 )
    {
      AtkRateData_k__BackingField = this->fields._AtkRateData_k__BackingField;
      if ( AtkRateData_k__BackingField )
      {
        v4 = sub_1C37194(this->fields._AtkRateData_k__BackingField, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
        if ( !v4 )
          goto LABEL_19;
      }
      if ( !LODWORD(v7->max_length) )
        goto LABEL_18;
      v7->m_Items[0] = AtkRateData_k__BackingField;
      sub_1C36FFC((CGThumbnailListItem_o *)v7->m_Items, (int32_t)AtkRateData_k__BackingField, v5, v6);
      DefRateData_k__BackingField = this->fields._DefRateData_k__BackingField;
      if ( !DefRateData_k__BackingField )
        goto LABEL_16;
LABEL_15:
      v4 = sub_1C37194(DefRateData_k__BackingField, v7->obj.klass->_1.element_class);
      if ( v4 )
        goto LABEL_16;
LABEL_19:
      v14 = sub_1C372D8(v4);
      sub_1C37180(v14, 0);
    }
LABEL_20:
    sub_1C372B4(v4);
  }
  if ( !v4 )
    goto LABEL_20;
  v8 = this->fields._DefRateData_k__BackingField;
  if ( v8 )
  {
    v4 = sub_1C37194(this->fields._DefRateData_k__BackingField, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
    if ( !v4 )
      goto LABEL_19;
  }
  if ( !LODWORD(v7->max_length) )
    goto LABEL_18;
  v7->m_Items[0] = v8;
  sub_1C36FFC((CGThumbnailListItem_o *)v7->m_Items, (int32_t)v8, v5, v6);
  DefRateData_k__BackingField = this->fields._AtkRateData_k__BackingField;
  if ( DefRateData_k__BackingField )
    goto LABEL_15;
LABEL_16:
  if ( LODWORD(v7->max_length) <= 1 )
LABEL_18:
    sub_1C372BC(v4);
  v7->m_Items[1] = DefRateData_k__BackingField;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->m_Items[1], (int32_t)DefRateData_k__BackingField, v9, v10);
  this->fields._FixRate_k__BackingField = BattleLogicClassRelation_ResultData__getFixRatePriorityAsc(this, v7, v13);
}


void BattleLogicClassRelation_ResultData__getBuffShowState(
        BattleLogicClassRelation_ResultData_o *this,
        BattleLogicClassRelation_DamageRateData_o *damageRate,
        BattleLogicClassRelation_DamageRateData_o *opponentDamageRate,
        bool isAtkSide,
        int32_t *state,
        const MethodInfo *method)
{
  float BaseRate_k__BackingField; // s0
  float Value_k__BackingField; // s1
  int32_t v11; // w8

  *state = 1;
  if ( !damageRate )
    goto LABEL_15;
  if ( !damageRate->fields._IsInvoked_k__BackingField )
    return;
  if ( !opponentDamageRate )
LABEL_15:
    sub_1C372B4(this);
  BaseRate_k__BackingField = this->fields._BaseRate_k__BackingField;
  Value_k__BackingField = damageRate->fields._Value_k__BackingField;
  if ( !opponentDamageRate->fields._IsInvoked_k__BackingField )
  {
    if ( BaseRate_k__BackingField == Value_k__BackingField )
      return;
    goto LABEL_13;
  }
  if ( BaseRate_k__BackingField == Value_k__BackingField
    && BaseRate_k__BackingField == opponentDamageRate->fields._Value_k__BackingField )
  {
    return;
  }
  if ( ((BattleLogicClassRelation_ResultData__get_IsPriorAttack(this, (const MethodInfo *)damageRate) ^ isAtkSide) & 1) == 0 )
  {
LABEL_13:
    *state = 0;
    return;
  }
  if ( this->fields._BaseRate_k__BackingField == damageRate->fields._Value_k__BackingField )
    v11 = 1;
  else
    v11 = 2;
  *state = v11;
}


float BattleLogicClassRelation_ResultData__getFixRatePriorityAsc(
        BattleLogicClassRelation_ResultData_o *this,
        BattleLogicClassRelation_DamageRateData_array *damageRateArray,
        const MethodInfo *method)
{
  long double v3; // q0
  int max_length; // w8
  unsigned int v6; // w21
  BattleLogicClassRelation_DamageRateData_o *v7; // x20
  float Value_k__BackingField; // s8

  if ( !damageRateArray )
    goto LABEL_11;
  max_length = damageRateArray->max_length;
  *(float *)&v3 = this->fields._BaseRate_k__BackingField;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C372BC(this);
      v7 = damageRateArray->m_Items[v6];
      if ( !v7 )
        break;
      this = (BattleLogicClassRelation_ResultData_o *)v7->fields._proc;
      if ( this )
      {
        Value_k__BackingField = v7->fields._Value_k__BackingField;
        *(float *)&v3 = ((float (__fastcall *)(BattleLogicClassRelation_ResultData_o *, BattleLogicClassRelation_DamageRateData_o *, void *, long double))this->klass[1]._1.image)(
                          this,
                          v7,
                          this->klass[1]._1.gc_desc,
                          v3);
        v7->fields._Value_k__BackingField = *(float *)&v3;
        v7->fields._IsInvoked_k__BackingField = *(float *)&v3 == Value_k__BackingField;
      }
      max_length = damageRateArray->max_length;
      if ( (int)++v6 >= max_length )
        return *(float *)&v3;
    }
LABEL_11:
    sub_1C372B4(this);
  }
  return *(float *)&v3;
}


BattleLogicClassRelation_DamageRateData_o *BattleLogicClassRelation_ResultData__get_AtkRateData(
        BattleLogicClassRelation_ResultData_o *this,
        const MethodInfo *method)
{
  return this->fields._AtkRateData_k__BackingField;
}


float BattleLogicClassRelation_ResultData__get_BaseRate(
        BattleLogicClassRelation_ResultData_o *this,
        const MethodInfo *method)
{
  return this->fields._BaseRate_k__BackingField;
}


BattleLogicClassRelation_DamageRateData_o *BattleLogicClassRelation_ResultData__get_DefRateData(
        BattleLogicClassRelation_ResultData_o *this,
        const MethodInfo *method)
{
  return this->fields._DefRateData_k__BackingField;
}


float BattleLogicClassRelation_ResultData__get_FixRate(
        BattleLogicClassRelation_ResultData_o *this,
        const MethodInfo *method)
{
  return this->fields._FixRate_k__BackingField;
}


bool BattleLogicClassRelation_ResultData__get_IsPriorAttack(
        BattleLogicClassRelation_ResultData_o *this,
        const MethodInfo *method)
{
  struct BattleLogicClassRelation_DamageRateData_o *DefRateData_k__BackingField; // x8
  struct BattleLogicClassRelation_DamageRateData_o *AtkRateData_k__BackingField; // x9

  DefRateData_k__BackingField = this->fields._DefRateData_k__BackingField;
  if ( !DefRateData_k__BackingField || (AtkRateData_k__BackingField = this->fields._AtkRateData_k__BackingField) == 0 )
    sub_1C372B4(this);
  return DefRateData_k__BackingField->fields._Priority_k__BackingField < AtkRateData_k__BackingField->fields._Priority_k__BackingField;
}


void BattleLogicClassRelation_ResultData__set_AtkRateData(
        BattleLogicClassRelation_ResultData_o *this,
        BattleLogicClassRelation_DamageRateData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AtkRateData_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._AtkRateData_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicClassRelation_ResultData__set_BaseRate(
        BattleLogicClassRelation_ResultData_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._BaseRate_k__BackingField = value;
}


void BattleLogicClassRelation_ResultData__set_DefRateData(
        BattleLogicClassRelation_ResultData_o *this,
        BattleLogicClassRelation_DamageRateData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._DefRateData_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._DefRateData_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleLogicClassRelation_ResultData__set_FixRate(
        BattleLogicClassRelation_ResultData_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._FixRate_k__BackingField = value;
}