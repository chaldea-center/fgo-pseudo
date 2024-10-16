void __fastcall BattleLogicClassRelation___ctor(BattleLogicClassRelation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleLogicClassRelation_Process_array *v7; // x20
  Il2CppObject *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x0

  if ( (byte_4AB8909 & 1) == 0 )
  {
    sub_1BAB41C(&BattleLogicClassRelation_AttackOverwriteProcess_TypeInfo, method);
    sub_1BAB41C(&BattleLogicClassRelation_DefenseOverwriteProcess_TypeInfo, v3);
    sub_1BAB41C(&BattleLogicClassRelation_OldAttackOverwriteProcess_TypeInfo, v4);
    sub_1BAB41C(&BattleLogicClassRelation_OldDefenseOverwriteProcess_TypeInfo, v5);
    sub_1BAB41C(&BattleLogicClassRelation_Process___TypeInfo, v6);
    byte_4AB8909 = 1;
  }
  v7 = (struct BattleLogicClassRelation_Process_array *)sub_1BAB4C4(BattleLogicClassRelation_Process___TypeInfo, 4LL);
  v8 = (Il2CppObject *)sub_1BAB668(BattleLogicClassRelation_OldAttackOverwriteProcess_TypeInfo);
  System_Object___ctor(v8, 0LL);
  if ( !v7 )
    sub_1BAB678(v9, v10);
  if ( v8 )
  {
    v9 = sub_1BAB558(v8, v7->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( !v7->max_length )
    goto LABEL_17;
  v7->m_Items[0] = (BattleLogicClassRelation_Process_o *)v8;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v7->m_Items, (int32_t)v8, v11, v12);
  v13 = (Il2CppObject *)sub_1BAB668(BattleLogicClassRelation_OldDefenseOverwriteProcess_TypeInfo);
  System_Object___ctor(v13, 0LL);
  if ( v13 )
  {
    v9 = sub_1BAB558(v13, v7->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_17;
  v7->m_Items[1] = (BattleLogicClassRelation_Process_o *)v13;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v7->m_Items[1], (int32_t)v13, v14, v15);
  v16 = (Il2CppObject *)sub_1BAB668(BattleLogicClassRelation_AttackOverwriteProcess_TypeInfo);
  System_Object___ctor(v16, 0LL);
  if ( v16 )
  {
    v9 = sub_1BAB558(v16, v7->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_17;
  v7->m_Items[2] = (BattleLogicClassRelation_Process_o *)v16;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v7->m_Items[2], (int32_t)v16, v17, v18);
  v19 = (Il2CppObject *)sub_1BAB668(BattleLogicClassRelation_DefenseOverwriteProcess_TypeInfo);
  System_Object___ctor(v19, 0LL);
  if ( v19 )
  {
    v9 = sub_1BAB558(v19, v7->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_18:
      v24 = sub_1BAB69C(v9);
      sub_1BAB544(v24, 0LL);
    }
  }
  if ( v7->max_length <= 3 )
LABEL_17:
    sub_1BAB680(v9, v10);
  v7->m_Items[3] = (BattleLogicClassRelation_Process_o *)v19;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v7->m_Items[3], (int32_t)v19, v20, v21);
  this->fields._procArray = v7;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v22, v23);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ClassRelationOverwriteMaster_o *__fastcall BattleLogicClassRelation__get_OverwriteMst(
        BattleLogicClassRelation_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ClassRelationOverwriteMaster_o *result; // x0
  ServantStatusBattleListViewItem_o *p_overwriteMst; // x19
  ClassRelationOverwriteMaster_o *overwriteMst; // t1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4AB8908 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ClassRelationOverwriteMaster___, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4AB8908 = 1;
  }
  overwriteMst = this->fields._overwriteMst;
  p_overwriteMst = (ServantStatusBattleListViewItem_o *)&this->fields._overwriteMst;
  result = overwriteMst;
  if ( !overwriteMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BAB678(0LL, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ClassRelationOverwriteMaster___);
    p_overwriteMst->klass = (ServantStatusBattleListViewItem_c *)MasterData_object;
    sub_1BAB3C0(p_overwriteMst, (int32_t)MasterData_object, v10, v11);
    return (ClassRelationOverwriteMaster_o *)p_overwriteMst->klass;
  }
  return result;
}


BattleLogicClassRelation_ResultData_o *__fastcall BattleLogicClassRelation__proc(
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
  this = (BattleLogicClassRelation_o *)((__int64 (__fastcall *)(BattleLogicClassRelation_Argument_o *, void *, const MethodInfo *))arg->klass->vtable._4_initResultData.method)(
                                         arg,
                                         arg->klass[1]._1.image,
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
        sub_1BAB680(this, arg);
      this = (BattleLogicClassRelation_o *)procArray->m_Items[v8];
      if ( !this )
        break;
      this = (BattleLogicClassRelation_o *)((__int64 (__fastcall *)(BattleLogicClassRelation_o *, BattleLogicClassRelation_o *, BattleLogicClassRelation_Argument_o *, BattleLogicClassRelation_ResultData_o *, const char *))this->klass[1]._1.gc_desc)(
                                             this,
                                             v4,
                                             arg,
                                             v7,
                                             this->klass[1]._1.name);
      max_length = procArray->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_8;
    }
LABEL_10:
    sub_1BAB678(this, arg);
  }
LABEL_8:
  if ( !v7 )
    goto LABEL_10;
  ((void (__fastcall *)(BattleLogicClassRelation_ResultData_o *, void *))v7->klass->vtable._4_fixResult.method)(
    v7,
    v7->klass[1]._1.image);
  return v7;
}


void __fastcall BattleLogicClassRelation_Argument___ctor(
        BattleLogicClassRelation_Argument_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *attackSvt,
        BattleServantData_o *defenseSvt,
        bool isAct,
        const MethodInfo *method)
{
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  BattleServantData_o *atkSvt; // x0
  BattleServantData_o *defSvt; // x8
  ServantClassMaster_o *v21; // x20
  int32_t RelationId; // w0
  int32_t defClassId; // w1

  if ( (byte_4AB890A & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantClassMaster___, command);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4AB890A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.command = command;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)command, v12, v13);
  this->fields.atkSvt = attackSvt;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.atkSvt, (int32_t)attackSvt, v14, v15);
  this->fields.defSvt = defenseSvt;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.defSvt, (int32_t)defenseSvt, v16, v17);
  this->fields.isAction = isAct;
  atkSvt = this->fields.atkSvt;
  if ( !atkSvt
    || (atkSvt = (BattleServantData_o *)BattleServantData__getBattleClassId(
                                          atkSvt,
                                          command,
                                          this->fields.defSvt,
                                          isAct,
                                          1,
                                          0LL),
        defSvt = this->fields.defSvt,
        this->fields.atkClassId = (int)atkSvt,
        !defSvt)
    || (this->fields.defClassId = BattleServantData__getBattleClassId(
                                    defSvt,
                                    command,
                                    this->fields.atkSvt,
                                    isAct,
                                    0,
                                    0LL),
        (atkSvt = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (atkSvt = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)atkSvt,
                                          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1BAB678(atkSvt, v18);
  }
  v21 = (ServantClassMaster_o *)atkSvt;
  RelationId = ServantClassMaster__getRelationId((ServantClassMaster_o *)atkSvt, this->fields.atkClassId, 0LL);
  defClassId = this->fields.defClassId;
  this->fields.atkRelationId = RelationId;
  this->fields.defRelationId = ServantClassMaster__getRelationId(v21, defClassId, 0LL);
}


BattleLogicClassRelation_ResultData_o *__fastcall BattleLogicClassRelation_Argument__initResultData(
        BattleLogicClassRelation_Argument_o *this,
        const MethodInfo *method)
{
  BattleLogicClassRelation_ResultData_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4AB890B & 1) == 0 )
  {
    sub_1BAB41C(&BattleLogicClassRelation_ResultData_TypeInfo, method);
    byte_4AB890B = 1;
  }
  v3 = (BattleLogicClassRelation_ResultData_o *)sub_1BAB668(BattleLogicClassRelation_ResultData_TypeInfo);
  BattleLogicClassRelation_ResultData___ctor(v3, this, v4);
  return v3;
}


void __fastcall BattleLogicClassRelation_AttackOverwriteProcess___ctor(
        BattleLogicClassRelation_AttackOverwriteProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicClassRelation_AttackOverwriteProcess__execLocal(
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
        (this = (BattleLogicClassRelation_AttackOverwriteProcess_o *)arg->fields.atkSvt) == 0LL) )
  {
    sub_1BAB678(this, logic);
  }
  AtkRateData_k__BackingField = result->fields._AtkRateData_k__BackingField;
  BuffOverwriteClassRelationArray = BattleServantData__getBuffOverwriteClassRelationArray(
                                      (BattleServantData_o *)this,
                                      arg->fields.command,
                                      arg->fields.defSvt,
                                      0,
                                      0LL);
  BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate(
    v6,
    logic,
    arg,
    AtkRateData_k__BackingField,
    BuffOverwriteClassRelationArray,
    v10);
}


bool __fastcall BattleLogicClassRelation_AttackOverwriteProcess__get_IsAtkSide(
        BattleLogicClassRelation_AttackOverwriteProcess_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall BattleLogicClassRelation_DamageRateData___ctor(
        BattleLogicClassRelation_DamageRateData_o *this,
        BattleLogicClassRelation_ResultData_o *result,
        const MethodInfo *method)
{
  BattleLogicClassRelation_DamageRateData_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields._Result_k__BackingField = result;
  v4 = (BattleLogicClassRelation_DamageRateData_o *)((char *)v4 + 16);
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v4, (int32_t)result, v5, v6);
  v4->monitor = (void *)0xFFFFFFFFLL;
  LODWORD(v4->fields._Result_k__BackingField) = -1;
  BYTE4(v4->fields._Result_k__BackingField) = 0;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleLogicClassRelation_DamageRateData__getFixRate(
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
    rate = ((float (__fastcall *)(struct BattleLogicClassRelation_Process_o *, BattleLogicClassRelation_DamageRateData_o *, void *, long double))proc->klass->vtable._5_getFixRate.method)(
             proc,
             this,
             proc->klass[1]._1.image,
             *(long double *)&rate);
    this->fields._Value_k__BackingField = rate;
    this->fields._IsInvoked_k__BackingField = rate == Value_k__BackingField;
  }
  return rate;
}


int32_t __fastcall BattleLogicClassRelation_DamageRateData__get_GeneralType(
        BattleLogicClassRelation_DamageRateData_o *this,
        const MethodInfo *method)
{
  return this->fields._GeneralType_k__BackingField;
}


bool __fastcall BattleLogicClassRelation_DamageRateData__get_IsAction(
        BattleLogicClassRelation_DamageRateData_o *this,
        const MethodInfo *method)
{
  return this->fields._proc != 0LL;
}


bool __fastcall BattleLogicClassRelation_DamageRateData__get_IsInvoked(
        BattleLogicClassRelation_DamageRateData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsInvoked_k__BackingField;
}


int32_t __fastcall BattleLogicClassRelation_DamageRateData__get_Priority(
        BattleLogicClassRelation_DamageRateData_o *this,
        const MethodInfo *method)
{
  return this->fields._Priority_k__BackingField;
}


BattleLogicClassRelation_ResultData_o *__fastcall BattleLogicClassRelation_DamageRateData__get_Result(
        BattleLogicClassRelation_DamageRateData_o *this,
        const MethodInfo *method)
{
  return this->fields._Result_k__BackingField;
}


float __fastcall BattleLogicClassRelation_DamageRateData__get_Value(
        BattleLogicClassRelation_DamageRateData_o *this,
        const MethodInfo *method)
{
  return this->fields._Value_k__BackingField;
}


void __fastcall BattleLogicClassRelation_DamageRateData__set_GeneralType(
        BattleLogicClassRelation_DamageRateData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GeneralType_k__BackingField = value;
}


void __fastcall BattleLogicClassRelation_DamageRateData__set_IsInvoked(
        BattleLogicClassRelation_DamageRateData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsInvoked_k__BackingField = value;
}


void __fastcall BattleLogicClassRelation_DamageRateData__set_Priority(
        BattleLogicClassRelation_DamageRateData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Priority_k__BackingField = value;
}


void __fastcall BattleLogicClassRelation_DamageRateData__set_Result(
        BattleLogicClassRelation_DamageRateData_o *this,
        BattleLogicClassRelation_ResultData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Result_k__BackingField = value;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleLogicClassRelation_DamageRateData__set_Value(
        BattleLogicClassRelation_DamageRateData_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._Value_k__BackingField = value;
}


bool __fastcall BattleLogicClassRelation_DamageRateData__updateValue(
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
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_proc, (int32_t)proc, type, (int32_t)proc);
  }
  return Priority_k__BackingField < priority;
}


void __fastcall BattleLogicClassRelation_DefenseOverwriteProcess___ctor(
        BattleLogicClassRelation_DefenseOverwriteProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicClassRelation_DefenseOverwriteProcess__execLocal(
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
        (this = (BattleLogicClassRelation_DefenseOverwriteProcess_o *)arg->fields.defSvt) == 0LL) )
  {
    sub_1BAB678(this, logic);
  }
  DefRateData_k__BackingField = result->fields._DefRateData_k__BackingField;
  BuffOverwriteClassRelationArray = BattleServantData__getBuffOverwriteClassRelationArray(
                                      (BattleServantData_o *)this,
                                      arg->fields.command,
                                      arg->fields.atkSvt,
                                      0,
                                      0LL);
  BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate(
    v6,
    logic,
    arg,
    DefRateData_k__BackingField,
    BuffOverwriteClassRelationArray,
    v10);
}


bool __fastcall BattleLogicClassRelation_DefenseOverwriteProcess__get_IsAtkSide(
        BattleLogicClassRelation_DefenseOverwriteProcess_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BattleLogicClassRelation_OldAttackOverwriteProcess___ctor(
        BattleLogicClassRelation_OldAttackOverwriteProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicClassRelation_OldAttackOverwriteProcess__exec(
        BattleLogicClassRelation_OldAttackOverwriteProcess_o *this,
        BattleLogicClassRelation_o *logic,
        BattleLogicClassRelation_Argument_o *arg,
        BattleLogicClassRelation_ResultData_o *result,
        const MethodInfo *method)
{
  BattleLogicClassRelation_OldAttackOverwriteProcess_o *v7; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleLogicClassRelation_DamageRateData_o *AtkRateData_k__BackingField; // x20
  int32_t v11; // w8
  float v12; // s0
  float val; // [xsp+Ch] [xbp-24h] BYREF

  v7 = this;
  if ( (byte_4AB890F & 1) == 0 )
  {
    this = (BattleLogicClassRelation_OldAttackOverwriteProcess_o *)sub_1BAB41C(&BattleDataDefine_TypeInfo, logic);
    byte_4AB890F = 1;
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
                                                                   0LL);
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
    sub_1BAB678(this, logic);
  v11 = *(_DWORD *)this[11].monitor;
  if ( AtkRateData_k__BackingField->fields._Priority_k__BackingField < v11 )
  {
    v12 = val;
    AtkRateData_k__BackingField->fields._proc = (struct BattleLogicClassRelation_Process_o *)v7;
    AtkRateData_k__BackingField->fields._Priority_k__BackingField = v11;
    AtkRateData_k__BackingField->fields._Value_k__BackingField = v12;
    AtkRateData_k__BackingField->fields._GeneralType_k__BackingField = 0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&AtkRateData_k__BackingField->fields._proc, (int32_t)v7, v8, v9);
  }
}


void __fastcall BattleLogicClassRelation_OldDefenseOverwriteProcess___ctor(
        BattleLogicClassRelation_OldDefenseOverwriteProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicClassRelation_OldDefenseOverwriteProcess__exec(
        BattleLogicClassRelation_OldDefenseOverwriteProcess_o *this,
        BattleLogicClassRelation_o *logic,
        BattleLogicClassRelation_Argument_o *arg,
        BattleLogicClassRelation_ResultData_o *result,
        const MethodInfo *method)
{
  BattleLogicClassRelation_OldDefenseOverwriteProcess_o *v7; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleLogicClassRelation_DamageRateData_o *DefRateData_k__BackingField; // x20
  int32_t v11; // w8
  float v12; // s0
  float val; // [xsp+Ch] [xbp-24h] BYREF

  v7 = this;
  if ( (byte_4AB8910 & 1) == 0 )
  {
    this = (BattleLogicClassRelation_OldDefenseOverwriteProcess_o *)sub_1BAB41C(&BattleDataDefine_TypeInfo, logic);
    byte_4AB8910 = 1;
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
                                                                    0LL);
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
    sub_1BAB678(this, logic);
  v11 = *((_DWORD *)this[11].monitor + 1);
  if ( DefRateData_k__BackingField->fields._Priority_k__BackingField < v11 )
  {
    v12 = val;
    DefRateData_k__BackingField->fields._proc = (struct BattleLogicClassRelation_Process_o *)v7;
    DefRateData_k__BackingField->fields._Priority_k__BackingField = v11;
    DefRateData_k__BackingField->fields._Value_k__BackingField = v12;
    DefRateData_k__BackingField->fields._GeneralType_k__BackingField = 0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&DefRateData_k__BackingField->fields._proc, (int32_t)v7, v8, v9);
  }
}


void __fastcall BattleLogicClassRelation_OverwriteProcess___ctor(
        BattleLogicClassRelation_OverwriteProcess_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleLogicClassRelation_OverwriteProcess___overwriteDamageRate_b__4_0(
        BattleLogicClassRelation_OverwriteProcess_o *this,
        BattleBuffData_BuffData_o *b1,
        BattleBuffData_BuffData_o *b2,
        const MethodInfo *method)
{
  __int64 v6; // x0
  __int64 v7; // x1

  v6 = ((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, const char *, BattleBuffData_BuffData_o *, const MethodInfo *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name,
         b2,
         method);
  if ( !b1 )
    sub_1BAB678(v6, v7);
  return BattleBuffData_BuffData__checkRelationOrder(b1, b2, v6 & 1, 0LL);
}


void __fastcall BattleLogicClassRelation_OverwriteProcess__exec(
        BattleLogicClassRelation_OverwriteProcess_o *this,
        BattleLogicClassRelation_o *logic,
        BattleLogicClassRelation_Argument_o *arg,
        BattleLogicClassRelation_ResultData_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, BattleLogicClassRelation_o *, BattleLogicClassRelation_Argument_o *, BattleLogicClassRelation_ResultData_o *, void *))this->klass[1]._1.namespaze)(
    this,
    logic,
    arg,
    result,
    this->klass[1]._1.byval_arg.data);
}


float __fastcall BattleLogicClassRelation_OverwriteProcess__getFixRate(
        BattleLogicClassRelation_OverwriteProcess_o *this,
        BattleLogicClassRelation_DamageRateData_o *self,
        float compRate,
        const MethodInfo *method)
{
  int32_t GeneralType_k__BackingField; // w8

  if ( !self )
    sub_1BAB678(this, 0LL);
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


void __fastcall BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate(
        BattleLogicClassRelation_OverwriteProcess_o *this,
        BattleLogicClassRelation_o *logic,
        BattleLogicClassRelation_Argument_o *arg,
        BattleLogicClassRelation_DamageRateData_o *damageRate,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  System_Comparison_T__o *v13; // x24
  ClassRelationOverwriteMaster_o *OverwriteMst; // x0
  const MethodInfo *v15; // x1
  signed int max_length; // w8
  unsigned int v17; // w28
  BattleBuffData_BuffData_o *v18; // x24
  BattleBuffData_RelationOverwriteData_o *relationOverwrite; // x25
  int32_t id; // w27
  ClassRelationOverwriteMaster_o *v21; // x26
  char v22; // w0
  int32_t v23; // w25
  int32_t v24; // w2
  int32_t v25; // w3
  float Rate; // s0
  int32_t type; // w8
  __int64 v28; // x8
  __int64 v29; // x8
  ClassRelationOverwriteEntity_o *outEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4AB890E & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Array_Sort_BattleBuffData_BuffData___, logic);
    sub_1BAB41C(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v11);
    sub_1BAB41C(&Method_BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate_b__4_0__, v12);
    byte_4AB890E = 1;
  }
  v13 = (System_Comparison_T__o *)sub_1BAB668(System_Comparison_BattleBuffData_BuffData__TypeInfo);
  System_Comparison_object____ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate_b__4_0__,
    0LL);
  System_Array__Sort_object__48833124(
    (System_Object_array *)buffArray,
    v13,
    (const MethodInfo_2E92264 *)Method_System_Array_Sort_BattleBuffData_BuffData___);
  outEnt = 0LL;
  if ( !buffArray )
    goto LABEL_26;
  max_length = buffArray->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1BAB680(OverwriteMst, v15);
      v18 = buffArray->m_Items[v17];
      if ( !v18 )
        goto LABEL_26;
      if ( !logic )
        goto LABEL_26;
      relationOverwrite = v18->fields.relationOverwrite;
      OverwriteMst = BattleLogicClassRelation__get_OverwriteMst(logic, v15);
      if ( !relationOverwrite )
        goto LABEL_26;
      id = relationOverwrite->fields.id;
      v21 = OverwriteMst;
      OverwriteMst = (ClassRelationOverwriteMaster_o *)((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, const char *))this->klass[1]._1.gc_desc)(
                                                         this,
                                                         this->klass[1]._1.name);
      if ( !arg || !v21 )
        goto LABEL_26;
      OverwriteMst = (ClassRelationOverwriteMaster_o *)ClassRelationOverwriteMaster__getEntity(
                                                         v21,
                                                         &outEnt,
                                                         id,
                                                         (unsigned __int8)OverwriteMst & 1,
                                                         arg->fields.atkRelationId,
                                                         arg->fields.defRelationId,
                                                         0LL);
      if ( ((unsigned __int8)OverwriteMst & 1) != 0 )
      {
        v22 = ((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, const char *))this->klass[1]._1.gc_desc)(
                this,
                this->klass[1]._1.name);
        OverwriteMst = (ClassRelationOverwriteMaster_o *)BattleBuffData_RelationOverwriteData__getPriority(
                                                           relationOverwrite,
                                                           v22 & 1,
                                                           0LL);
        if ( !outEnt )
          goto LABEL_26;
        v23 = (int)OverwriteMst;
        Rate = ClassRelationOverwriteEntity__getRate(outEnt, 0LL);
        if ( !outEnt || !damageRate )
          goto LABEL_26;
        if ( damageRate->fields._Priority_k__BackingField < v23 )
          break;
      }
      max_length = buffArray->max_length;
      if ( (int)++v17 >= max_length )
        return;
    }
    type = outEnt->fields.type;
    damageRate->fields._proc = (struct BattleLogicClassRelation_Process_o *)this;
    damageRate->fields._Priority_k__BackingField = v23;
    damageRate->fields._Value_k__BackingField = Rate;
    damageRate->fields._GeneralType_k__BackingField = type;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&damageRate->fields._proc, (int32_t)this, v24, v25);
    if ( arg->fields.isAction )
    {
      OverwriteMst = (ClassRelationOverwriteMaster_o *)((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, const char *))this->klass[1]._1.gc_desc)(
                                                         this,
                                                         this->klass[1]._1.name);
      v28 = 32LL;
      if ( ((unsigned __int8)OverwriteMst & 1) != 0 )
        v28 = 24LL;
      v29 = *(__int64 *)((char *)&arg->klass + v28);
      if ( v29 )
      {
        OverwriteMst = *(ClassRelationOverwriteMaster_o **)(v29 + 792);
        if ( OverwriteMst )
        {
          BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)OverwriteMst, v18, arg->fields.isAction, 0LL);
          return;
        }
      }
LABEL_26:
      sub_1BAB678(OverwriteMst, v15);
    }
  }
}


void __fastcall BattleLogicClassRelation_Process___ctor(
        BattleLogicClassRelation_Process_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


float __fastcall BattleLogicClassRelation_Process__getFixRate(
        BattleLogicClassRelation_Process_o *this,
        BattleLogicClassRelation_DamageRateData_o *self,
        float compRate,
        const MethodInfo *method)
{
  if ( !self )
    sub_1BAB678(this, 0LL);
  return self->fields._Value_k__BackingField;
}


void __fastcall BattleLogicClassRelation_ResultData___ctor(
        BattleLogicClassRelation_ResultData_o *this,
        BattleLogicClassRelation_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  struct BattleLogicClassRelation_DamageRateData_o **p_DefRateData_k__BackingField; // x19
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4AB890C & 1) == 0 )
  {
    sub_1BAB41C(&BattleLogicClassRelation_DamageRateData_TypeInfo, arg);
    byte_4AB890C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !arg )
    sub_1BAB678(v5, v6);
  this->fields._BaseRate_k__BackingField = ClassRelationMaster__getRate(
                                             arg->fields.atkRelationId,
                                             arg->fields.defRelationId,
                                             0LL);
  v7 = sub_1BAB668(BattleLogicClassRelation_DamageRateData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_QWORD *)(v7 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v8, v9);
  *(_BYTE *)(v7 + 36) = 0;
  *(_QWORD *)(v7 + 24) = 0xFFFFFFFFLL;
  *(_DWORD *)(v7 + 32) = -1;
  this->fields._AtkRateData_k__BackingField = (struct BattleLogicClassRelation_DamageRateData_o *)v7;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._AtkRateData_k__BackingField, v7, v10, v11);
  v12 = sub_1BAB668(BattleLogicClassRelation_DamageRateData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_QWORD *)(v12 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v12 + 24) = 0xFFFFFFFFLL;
  *(_DWORD *)(v12 + 32) = -1;
  *(_BYTE *)(v12 + 36) = 0;
  this->fields._DefRateData_k__BackingField = (struct BattleLogicClassRelation_DamageRateData_o *)v12;
  p_DefRateData_k__BackingField = &this->fields._DefRateData_k__BackingField;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_DefRateData_k__BackingField, v12, v16, v17);
  *((_DWORD *)p_DefRateData_k__BackingField + 2) = 1065353216;
}


void __fastcall BattleLogicClassRelation_ResultData__fixResult(
        BattleLogicClassRelation_ResultData_o *this,
        const MethodInfo *method)
{
  bool IsPriorAttack; // w21
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  BattleLogicClassRelation_DamageRateData_array *v8; // x20
  struct BattleLogicClassRelation_DamageRateData_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  struct BattleLogicClassRelation_DamageRateData_o *DefRateData_k__BackingField; // x21
  struct BattleLogicClassRelation_DamageRateData_o *AtkRateData_k__BackingField; // x21
  const MethodInfo *v14; // x2
  __int64 v15; // x0

  if ( (byte_4AB890D & 1) == 0 )
  {
    sub_1BAB41C(&BattleLogicClassRelation_DamageRateData___TypeInfo, method);
    byte_4AB890D = 1;
  }
  IsPriorAttack = BattleLogicClassRelation_ResultData__get_IsPriorAttack(this, method);
  v4 = sub_1BAB4C4(BattleLogicClassRelation_DamageRateData___TypeInfo, 2LL);
  v8 = (BattleLogicClassRelation_DamageRateData_array *)v4;
  if ( !IsPriorAttack )
  {
    if ( v4 )
    {
      AtkRateData_k__BackingField = this->fields._AtkRateData_k__BackingField;
      if ( AtkRateData_k__BackingField )
      {
        v4 = sub_1BAB558(this->fields._AtkRateData_k__BackingField, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
        if ( !v4 )
          goto LABEL_19;
      }
      if ( !v8->max_length )
        goto LABEL_18;
      v8->m_Items[0] = AtkRateData_k__BackingField;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v8->m_Items, (int32_t)AtkRateData_k__BackingField, v6, v7);
      DefRateData_k__BackingField = this->fields._DefRateData_k__BackingField;
      if ( !DefRateData_k__BackingField )
        goto LABEL_16;
LABEL_15:
      v4 = sub_1BAB558(DefRateData_k__BackingField, v8->obj.klass->_1.element_class);
      if ( v4 )
        goto LABEL_16;
LABEL_19:
      v15 = sub_1BAB69C(v4);
      sub_1BAB544(v15, 0LL);
    }
LABEL_20:
    sub_1BAB678(v4, v5);
  }
  if ( !v4 )
    goto LABEL_20;
  v9 = this->fields._DefRateData_k__BackingField;
  if ( v9 )
  {
    v4 = sub_1BAB558(this->fields._DefRateData_k__BackingField, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
    if ( !v4 )
      goto LABEL_19;
  }
  if ( !v8->max_length )
    goto LABEL_18;
  v8->m_Items[0] = v9;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v8->m_Items, (int32_t)v9, v6, v7);
  DefRateData_k__BackingField = this->fields._AtkRateData_k__BackingField;
  if ( DefRateData_k__BackingField )
    goto LABEL_15;
LABEL_16:
  if ( v8->max_length <= 1 )
LABEL_18:
    sub_1BAB680(v4, v5);
  v8->m_Items[1] = DefRateData_k__BackingField;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v8->m_Items[1], (int32_t)DefRateData_k__BackingField, v10, v11);
  this->fields._FixRate_k__BackingField = BattleLogicClassRelation_ResultData__getFixRatePriorityAsc(this, v8, v14);
}


void __fastcall BattleLogicClassRelation_ResultData__getBuffShowState(
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
    sub_1BAB678(this, damageRate);
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


float __fastcall BattleLogicClassRelation_ResultData__getFixRatePriorityAsc(
        BattleLogicClassRelation_ResultData_o *this,
        BattleLogicClassRelation_DamageRateData_array *damageRateArray,
        const MethodInfo *method)
{
  long double v3; // q0
  signed int max_length; // w8
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
        sub_1BAB680(this, damageRateArray);
      v7 = damageRateArray->m_Items[v6];
      if ( !v7 )
        break;
      this = (BattleLogicClassRelation_ResultData_o *)v7->fields._proc;
      if ( this )
      {
        Value_k__BackingField = v7->fields._Value_k__BackingField;
        *(float *)&v3 = ((float (__fastcall *)(BattleLogicClassRelation_ResultData_o *, BattleLogicClassRelation_DamageRateData_o *, const char *, long double))this->klass[1]._1.gc_desc)(
                          this,
                          v7,
                          this->klass[1]._1.name,
                          v3);
        v7->fields._Value_k__BackingField = *(float *)&v3;
        v7->fields._IsInvoked_k__BackingField = *(float *)&v3 == Value_k__BackingField;
      }
      max_length = damageRateArray->max_length;
      if ( (int)++v6 >= max_length )
        return *(float *)&v3;
    }
LABEL_11:
    sub_1BAB678(this, damageRateArray);
  }
  return *(float *)&v3;
}


BattleLogicClassRelation_DamageRateData_o *__fastcall BattleLogicClassRelation_ResultData__get_AtkRateData(
        BattleLogicClassRelation_ResultData_o *this,
        const MethodInfo *method)
{
  return this->fields._AtkRateData_k__BackingField;
}


float __fastcall BattleLogicClassRelation_ResultData__get_BaseRate(
        BattleLogicClassRelation_ResultData_o *this,
        const MethodInfo *method)
{
  return this->fields._BaseRate_k__BackingField;
}


BattleLogicClassRelation_DamageRateData_o *__fastcall BattleLogicClassRelation_ResultData__get_DefRateData(
        BattleLogicClassRelation_ResultData_o *this,
        const MethodInfo *method)
{
  return this->fields._DefRateData_k__BackingField;
}


float __fastcall BattleLogicClassRelation_ResultData__get_FixRate(
        BattleLogicClassRelation_ResultData_o *this,
        const MethodInfo *method)
{
  return this->fields._FixRate_k__BackingField;
}


bool __fastcall BattleLogicClassRelation_ResultData__get_IsPriorAttack(
        BattleLogicClassRelation_ResultData_o *this,
        const MethodInfo *method)
{
  struct BattleLogicClassRelation_DamageRateData_o *DefRateData_k__BackingField; // x8
  struct BattleLogicClassRelation_DamageRateData_o *AtkRateData_k__BackingField; // x9

  DefRateData_k__BackingField = this->fields._DefRateData_k__BackingField;
  if ( !DefRateData_k__BackingField || (AtkRateData_k__BackingField = this->fields._AtkRateData_k__BackingField) == 0LL )
    sub_1BAB678(this, method);
  return DefRateData_k__BackingField->fields._Priority_k__BackingField < AtkRateData_k__BackingField->fields._Priority_k__BackingField;
}


void __fastcall BattleLogicClassRelation_ResultData__set_AtkRateData(
        BattleLogicClassRelation_ResultData_o *this,
        BattleLogicClassRelation_DamageRateData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._AtkRateData_k__BackingField = value;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._AtkRateData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleLogicClassRelation_ResultData__set_BaseRate(
        BattleLogicClassRelation_ResultData_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._BaseRate_k__BackingField = value;
}


void __fastcall BattleLogicClassRelation_ResultData__set_DefRateData(
        BattleLogicClassRelation_ResultData_o *this,
        BattleLogicClassRelation_DamageRateData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._DefRateData_k__BackingField = value;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._DefRateData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleLogicClassRelation_ResultData__set_FixRate(
        BattleLogicClassRelation_ResultData_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._FixRate_k__BackingField = value;
}