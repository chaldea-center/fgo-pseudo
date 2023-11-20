void __fastcall BattleLogicClassRelation___ctor(BattleLogicClassRelation_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleLogicClassRelation_Process_array *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  BattleLogicClassRelation_OldAttackOverwriteProcess_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  BattleLogicClassRelation_OldDefenseOverwriteProcess_o *v26; // x21
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  BattleLogicClassRelation_AttackOverwriteProcess_o *v36; // x21
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  BattleLogicClassRelation_DefenseOverwriteProcess_o *v46; // x21
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_40FCD9F & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicClassRelation_AttackOverwriteProcess_TypeInfo, method);
    sub_B16FFC(&BattleLogicClassRelation_DefenseOverwriteProcess_TypeInfo, v4);
    sub_B16FFC(&BattleLogicClassRelation_OldAttackOverwriteProcess_TypeInfo, v5);
    sub_B16FFC(&BattleLogicClassRelation_OldDefenseOverwriteProcess_TypeInfo, v6);
    sub_B16FFC(&BattleLogicClassRelation_Process___TypeInfo, v7);
    byte_40FCD9F = 1;
  }
  v8 = (struct BattleLogicClassRelation_Process_array *)sub_B17014(BattleLogicClassRelation_Process___TypeInfo, 4LL, v2);
  v13 = (BattleLogicClassRelation_OldAttackOverwriteProcess_o *)sub_B170CC(
                                                                  BattleLogicClassRelation_OldAttackOverwriteProcess_TypeInfo,
                                                                  v9,
                                                                  v10,
                                                                  v11,
                                                                  v12);
  BattleLogicClassRelation_OldAttackOverwriteProcess___ctor(v13, 0LL);
  if ( !v8 )
    sub_B170D4();
  if ( v13 )
  {
    v14 = sub_B170BC(v13, v8->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_18;
  }
  if ( !v8->max_length )
    goto LABEL_17;
  v8->m_Items[0] = (BattleLogicClassRelation_Process_o *)v13;
  sub_B16F98((BattleServantConfConponent_o *)v8->m_Items, (System_Int32_array **)v13, v16, v17, v18, v19, v20, v21);
  v26 = (BattleLogicClassRelation_OldDefenseOverwriteProcess_o *)sub_B170CC(
                                                                   BattleLogicClassRelation_OldDefenseOverwriteProcess_TypeInfo,
                                                                   v22,
                                                                   v23,
                                                                   v24,
                                                                   v25);
  BattleLogicClassRelation_OldDefenseOverwriteProcess___ctor(v26, 0LL);
  if ( v26 )
  {
    v14 = sub_B170BC(v26, v8->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_18;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_17;
  v8->m_Items[1] = (BattleLogicClassRelation_Process_o *)v26;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[1], (System_Int32_array **)v26, v16, v27, v28, v29, v30, v31);
  v36 = (BattleLogicClassRelation_AttackOverwriteProcess_o *)sub_B170CC(
                                                               BattleLogicClassRelation_AttackOverwriteProcess_TypeInfo,
                                                               v32,
                                                               v33,
                                                               v34,
                                                               v35);
  BattleLogicClassRelation_AttackOverwriteProcess___ctor(v36, 0LL);
  if ( v36 )
  {
    v14 = sub_B170BC(v36, v8->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_18;
  }
  if ( v8->max_length <= 2 )
    goto LABEL_17;
  v8->m_Items[2] = (BattleLogicClassRelation_Process_o *)v36;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[2], (System_Int32_array **)v36, v16, v37, v38, v39, v40, v41);
  v46 = (BattleLogicClassRelation_DefenseOverwriteProcess_o *)sub_B170CC(
                                                                BattleLogicClassRelation_DefenseOverwriteProcess_TypeInfo,
                                                                v42,
                                                                v43,
                                                                v44,
                                                                v45);
  BattleLogicClassRelation_DefenseOverwriteProcess___ctor(v46, 0LL);
  if ( v46 )
  {
    v14 = sub_B170BC(v46, v8->obj.klass->_1.element_class);
    if ( !v14 )
    {
LABEL_18:
      sub_B170F4(v14);
      sub_B170A0();
    }
  }
  if ( v8->max_length <= 3 )
  {
LABEL_17:
    sub_B17100(v14, v15, v16);
    sub_B170A0();
  }
  v8->m_Items[3] = (BattleLogicClassRelation_Process_o *)v46;
  sub_B16F98((BattleServantConfConponent_o *)&v8->m_Items[3], (System_Int32_array **)v46, v16, v47, v48, v49, v50, v51);
  this->fields._procArray = v8;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v52, v53, v54, v55, v56, v57);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ClassRelationOverwriteMaster_o *__fastcall BattleLogicClassRelation__get_OverwriteMst(
        BattleLogicClassRelation_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ClassRelationOverwriteMaster_o *result; // x0
  BattleServantConfConponent_o *p_overwriteMst; // x19
  ClassRelationOverwriteMaster_o *overwriteMst; // t1
  WebViewManager_o *Instance; // x0
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FCD9E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ClassRelationOverwriteMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FCD9E = 1;
  }
  overwriteMst = this->fields._overwriteMst;
  p_overwriteMst = (BattleServantConfConponent_o *)&this->fields._overwriteMst;
  result = overwriteMst;
  if ( !overwriteMst )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ClassRelationOverwriteMaster___);
    p_overwriteMst->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B16F98(p_overwriteMst, MasterData_WarQuestSelectionMaster, v9, v10, v11, v12, v13, v14);
    return (ClassRelationOverwriteMaster_o *)p_overwriteMst->klass;
  }
  return result;
}


BattleLogicClassRelation_ResultData_o *__fastcall BattleLogicClassRelation__proc(
        BattleLogicClassRelation_o *this,
        BattleLogicClassRelation_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct BattleLogicClassRelation_Process_array *procArray; // x22
  int max_length; // w8
  BattleLogicClassRelation_ResultData_o *v10; // x21
  unsigned int v11; // w23
  BattleLogicClassRelation_Process_o *v12; // x0

  if ( !arg )
    goto LABEL_10;
  v5 = ((__int64 (__fastcall *)(BattleLogicClassRelation_Argument_o *, void *, const MethodInfo *))arg->klass->vtable._4_initResultData.method)(
         arg,
         arg->klass[1]._1.image,
         method);
  procArray = this->fields._procArray;
  if ( !procArray )
    goto LABEL_10;
  max_length = procArray->max_length;
  v10 = (BattleLogicClassRelation_ResultData_o *)v5;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        sub_B17100(v5, v6, v7);
        sub_B170A0();
      }
      v12 = procArray->m_Items[v11];
      if ( !v12 )
        break;
      v5 = ((__int64 (__fastcall *)(BattleLogicClassRelation_Process_o *, BattleLogicClassRelation_o *, BattleLogicClassRelation_Argument_o *, BattleLogicClassRelation_ResultData_o *, Il2CppMethodPointer))v12->klass->vtable._4_unknown.method)(
             v12,
             this,
             arg,
             v10,
             v12->klass->vtable._5_getFixRate.methodPtr);
      max_length = procArray->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_8;
    }
LABEL_10:
    sub_B170D4();
  }
LABEL_8:
  if ( !v10 )
    goto LABEL_10;
  ((void (__fastcall *)(BattleLogicClassRelation_ResultData_o *, void *))v10->klass->vtable._4_fixResult.method)(
    v10,
    v10->klass[1]._1.image);
  return v10;
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
  BattleServantData_o *atkSvt; // x0
  int32_t BattleClassId; // w0
  BattleServantData_o *defSvt; // x8
  WebViewManager_o *Instance; // x0
  ServantClassMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantClassMaster_o *v17; // x20
  int32_t RelationId; // w0
  int32_t defClassId; // w1

  if ( (byte_40F8544 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, command);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F8544 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.command = command;
  sub_B16F98(&this->fields, command);
  this->fields.atkSvt = attackSvt;
  sub_B16F98(&this->fields.atkSvt, attackSvt);
  this->fields.defSvt = defenseSvt;
  sub_B16F98(&this->fields.defSvt, defenseSvt);
  this->fields.isAction = isAct;
  atkSvt = this->fields.atkSvt;
  if ( !atkSvt
    || (BattleClassId = BattleServantData__getBattleClassId(atkSvt, command, this->fields.defSvt, isAct, 1, 0LL),
        defSvt = this->fields.defSvt,
        this->fields.atkClassId = BattleClassId,
        !defSvt)
    || (this->fields.defClassId = BattleServantData__getBattleClassId(
                                    defSvt,
                                    command,
                                    this->fields.atkSvt,
                                    isAct,
                                    0,
                                    0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (ServantClassMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  v17 = MasterData_WarQuestSelectionMaster;
  RelationId = ServantClassMaster__getRelationId(MasterData_WarQuestSelectionMaster, this->fields.atkClassId, 0LL);
  defClassId = this->fields.defClassId;
  this->fields.atkRelationId = RelationId;
  this->fields.defRelationId = ServantClassMaster__getRelationId(v17, defClassId, 0LL);
}


BattleLogicClassRelation_ResultData_o *__fastcall BattleLogicClassRelation_Argument__initResultData(
        BattleLogicClassRelation_Argument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleLogicClassRelation_ResultData_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_40F8545 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicClassRelation_ResultData_TypeInfo, method);
    byte_40F8545 = 1;
  }
  v6 = (BattleLogicClassRelation_ResultData_o *)sub_B170CC(
                                                  BattleLogicClassRelation_ResultData_TypeInfo,
                                                  method,
                                                  v2,
                                                  v3,
                                                  v4);
  BattleLogicClassRelation_ResultData___ctor(v6, this, v7);
  return v6;
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
  BattleServantData_o *atkSvt; // x0
  BattleLogicClassRelation_DamageRateData_o *AtkRateData_k__BackingField; // x22
  BattleBuffData_BuffData_array *BuffOverwriteClassRelationArray; // x0
  const MethodInfo *v11; // x5

  if ( !result || !arg || (atkSvt = arg->fields.atkSvt) == 0LL )
    sub_B170D4();
  AtkRateData_k__BackingField = result->fields._AtkRateData_k__BackingField;
  BuffOverwriteClassRelationArray = BattleServantData__getBuffOverwriteClassRelationArray(
                                      atkSvt,
                                      arg->fields.command,
                                      arg->fields.defSvt,
                                      0,
                                      0LL);
  BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate(
    (BattleLogicClassRelation_OverwriteProcess_o *)this,
    logic,
    arg,
    AtkRateData_k__BackingField,
    BuffOverwriteClassRelationArray,
    v11);
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

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields._Result_k__BackingField = result;
  v4 = (BattleLogicClassRelation_DamageRateData_o *)((char *)v4 + 16);
  sub_B16F98(v4, result);
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
  this->fields._Result_k__BackingField = value;
  sub_B16F98(&this->fields, value);
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
  struct BattleLogicClassRelation_Process_o **p_proc; // x0

  if ( this->fields._Priority_k__BackingField >= priority )
    return 0;
  this->fields._proc = proc;
  p_proc = &this->fields._proc;
  *((_DWORD *)p_proc - 4) = priority;
  *((float *)p_proc - 3) = value;
  *((_DWORD *)p_proc - 2) = type;
  sub_B16F98(p_proc, proc);
  return 1;
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
  BattleServantData_o *defSvt; // x0
  BattleLogicClassRelation_DamageRateData_o *DefRateData_k__BackingField; // x22
  BattleBuffData_BuffData_array *BuffOverwriteClassRelationArray; // x0
  const MethodInfo *v11; // x5

  if ( !result || !arg || (defSvt = arg->fields.defSvt) == 0LL )
    sub_B170D4();
  DefRateData_k__BackingField = result->fields._DefRateData_k__BackingField;
  BuffOverwriteClassRelationArray = BattleServantData__getBuffOverwriteClassRelationArray(
                                      defSvt,
                                      arg->fields.command,
                                      arg->fields.atkSvt,
                                      0,
                                      0LL);
  BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate(
    (BattleLogicClassRelation_OverwriteProcess_o *)this,
    logic,
    arg,
    DefRateData_k__BackingField,
    BuffOverwriteClassRelationArray,
    v11);
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
  BattleServantData_o *atkSvt; // x0
  struct BattleLogicClassRelation_DamageRateData_o *AtkRateData_k__BackingField; // x20
  BattleDataDefine_c *v10; // x0
  int32_t OVERWRITE_ATK_RATE_PRIORITY; // w8
  float v12; // w9
  float val; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8546 & 1) == 0 )
  {
    sub_B16FFC(&BattleDataDefine_TypeInfo, logic);
    byte_40F8546 = 1;
  }
  val = 0.0;
  if ( !arg )
    goto LABEL_14;
  atkSvt = arg->fields.atkSvt;
  if ( !atkSvt )
    goto LABEL_14;
  if ( !BattleServantData__isBuffClassRelatioAtk(
          atkSvt,
          arg->fields.command,
          arg->fields.defSvt,
          &val,
          arg->fields.isAction,
          0LL) )
    return;
  if ( !result )
    goto LABEL_14;
  AtkRateData_k__BackingField = result->fields._AtkRateData_k__BackingField;
  v10 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v10 = BattleDataDefine_TypeInfo;
  }
  if ( !AtkRateData_k__BackingField )
LABEL_14:
    sub_B170D4();
  OVERWRITE_ATK_RATE_PRIORITY = v10->static_fields->OVERWRITE_ATK_RATE_PRIORITY;
  if ( AtkRateData_k__BackingField->fields._Priority_k__BackingField < OVERWRITE_ATK_RATE_PRIORITY )
  {
    v12 = val;
    AtkRateData_k__BackingField->fields._proc = (struct BattleLogicClassRelation_Process_o *)this;
    AtkRateData_k__BackingField->fields._Priority_k__BackingField = OVERWRITE_ATK_RATE_PRIORITY;
    *(_QWORD *)&AtkRateData_k__BackingField->fields._Value_k__BackingField = LODWORD(v12);
    sub_B16F98(&AtkRateData_k__BackingField->fields._proc, this);
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
  BattleServantData_o *defSvt; // x0
  struct BattleLogicClassRelation_DamageRateData_o *DefRateData_k__BackingField; // x20
  BattleDataDefine_c *v10; // x0
  int32_t OVERWRITE_DEF_RATE_PRIORITY; // w8
  float v12; // w9
  float val; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8547 & 1) == 0 )
  {
    sub_B16FFC(&BattleDataDefine_TypeInfo, logic);
    byte_40F8547 = 1;
  }
  val = 0.0;
  if ( !arg )
    goto LABEL_14;
  defSvt = arg->fields.defSvt;
  if ( !defSvt )
    goto LABEL_14;
  if ( !BattleServantData__isBuffClassRelatioDef(
          defSvt,
          arg->fields.command,
          arg->fields.atkSvt,
          &val,
          arg->fields.isAction,
          0LL) )
    return;
  if ( !result )
    goto LABEL_14;
  DefRateData_k__BackingField = result->fields._DefRateData_k__BackingField;
  v10 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v10 = BattleDataDefine_TypeInfo;
  }
  if ( !DefRateData_k__BackingField )
LABEL_14:
    sub_B170D4();
  OVERWRITE_DEF_RATE_PRIORITY = v10->static_fields->OVERWRITE_DEF_RATE_PRIORITY;
  if ( DefRateData_k__BackingField->fields._Priority_k__BackingField < OVERWRITE_DEF_RATE_PRIORITY )
  {
    v12 = val;
    DefRateData_k__BackingField->fields._proc = (struct BattleLogicClassRelation_Process_o *)this;
    DefRateData_k__BackingField->fields._Priority_k__BackingField = OVERWRITE_DEF_RATE_PRIORITY;
    *(_QWORD *)&DefRateData_k__BackingField->fields._Value_k__BackingField = LODWORD(v12);
    sub_B16F98(&DefRateData_k__BackingField->fields._proc, this);
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
  char v6; // w0
  const MethodInfo *v7; // x3

  v6 = ((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, const char *, BattleBuffData_BuffData_o *, const MethodInfo *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name,
         b2,
         method);
  if ( !b1 )
    sub_B170D4();
  return BattleBuffData_BuffData__checkRelationOrder(b1, b2, v6 & 1, v7);
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
    sub_B170D4();
  GeneralType_k__BackingField = self->fields._GeneralType_k__BackingField;
  if ( GeneralType_k__BackingField == 2 )
    return UnityEngine_Mathf__Max(self->fields._Value_k__BackingField, compRate, 0LL);
  if ( GeneralType_k__BackingField == 1 )
    return UnityEngine_Mathf__Min(self->fields._Value_k__BackingField, compRate, 0LL);
  return self->fields._Value_k__BackingField;
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
  __int64 v13; // x1
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v14; // x24
  _BOOL8 Entity; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  signed int max_length; // w8
  unsigned int v19; // w27
  BattleBuffData_BuffData_o *v20; // x24
  struct BattleBuffData_RelationOverwriteData_o *relationOverwrite; // x28
  ClassRelationOverwriteMaster_o *OverwriteMst; // x0
  int32_t id; // w26
  ClassRelationOverwriteMaster_o *v24; // x25
  char v25; // w0
  char v26; // w0
  __int64 v27; // x9
  int32_t v28; // w25
  float Rate; // s0
  int32_t type; // w8
  long double v31; // q0
  char v32; // w0
  __int64 v33; // x8
  __int64 v34; // x8
  BattleBuffData_o *v35; // x0
  ClassRelationOverwriteEntity_o *outEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F8548 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_BattleBuffData_BuffData___, logic);
    sub_B16FFC(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, v11);
    sub_B16FFC(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v12);
    sub_B16FFC(&Method_BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate_b__4_0__, v13);
    byte_40F8548 = 1;
  }
  v14 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                    System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                    logic,
                                                                    arg,
                                                                    damageRate,
                                                                    buffArray);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate_b__4_0__,
    (const MethodInfo_25BFD48 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
  System_Array__Sort_BattleBuffData_BuffData_(
    buffArray,
    (System_Comparison_T__o *)v14,
    (const MethodInfo_2506BD4 *)Method_System_Array_Sort_BattleBuffData_BuffData___);
  outEnt = 0LL;
  if ( !buffArray )
    goto LABEL_28;
  max_length = buffArray->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
      {
        sub_B17100(Entity, v16, v17);
        sub_B170A0();
      }
      v20 = buffArray->m_Items[v19];
      if ( !v20 )
        goto LABEL_28;
      if ( !logic )
        goto LABEL_28;
      relationOverwrite = v20->fields.relationOverwrite;
      OverwriteMst = BattleLogicClassRelation__get_OverwriteMst(logic, 0LL);
      if ( !relationOverwrite )
        goto LABEL_28;
      id = relationOverwrite->fields.id;
      v24 = OverwriteMst;
      v25 = ((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, const char *))this->klass[1]._1.gc_desc)(
              this,
              this->klass[1]._1.name);
      if ( !arg || !v24 )
        goto LABEL_28;
      Entity = ClassRelationOverwriteMaster__getEntity(
                 v24,
                 &outEnt,
                 id,
                 v25 & 1,
                 arg->fields.atkRelationId,
                 arg->fields.defRelationId,
                 0LL);
      if ( Entity )
      {
        v26 = ((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, const char *))this->klass[1]._1.gc_desc)(
                this,
                this->klass[1]._1.name);
        v27 = 24LL;
        if ( (v26 & 1) != 0 )
          v27 = 20LL;
        if ( !outEnt )
          goto LABEL_28;
        v28 = *(_DWORD *)((char *)&relationOverwrite->klass + v27);
        Rate = ClassRelationOverwriteEntity__getRate(outEnt, 0LL);
        if ( !outEnt || !damageRate )
          goto LABEL_28;
        if ( damageRate->fields._Priority_k__BackingField < v28 )
          break;
      }
      max_length = buffArray->max_length;
      if ( (int)++v19 >= max_length )
        return;
    }
    type = outEnt->fields.type;
    damageRate->fields._proc = (struct BattleLogicClassRelation_Process_o *)this;
    damageRate->fields._Priority_k__BackingField = v28;
    damageRate->fields._Value_k__BackingField = Rate;
    damageRate->fields._GeneralType_k__BackingField = type;
    *(__n128 *)&v31 = sub_B16F98(&damageRate->fields._proc, this);
    if ( arg->fields.isAction )
    {
      v32 = ((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, const char *, long double))this->klass[1]._1.gc_desc)(
              this,
              this->klass[1]._1.name,
              v31);
      v33 = 32LL;
      if ( (v32 & 1) != 0 )
        v33 = 24LL;
      v34 = *(__int64 *)((char *)&arg->klass + v33);
      if ( v34 )
      {
        v35 = *(BattleBuffData_o **)(v34 + 736);
        if ( v35 )
        {
          BattleBuffData__checkBuffSuccessful(v35, v20, arg->fields.isAction, 0LL);
          return;
        }
      }
LABEL_28:
      sub_B170D4();
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
    sub_B170D4();
  return self->fields._Value_k__BackingField;
}


void __fastcall BattleLogicClassRelation_ResultData___ctor(
        BattleLogicClassRelation_ResultData_o *this,
        BattleLogicClassRelation_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x20

  if ( (byte_40F8549 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicClassRelation_DamageRateData_TypeInfo, arg);
    byte_40F8549 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !arg )
    sub_B170D4();
  this->fields._BaseRate_k__BackingField = ClassRelationMaster__getRate(
                                             arg->fields.atkRelationId,
                                             arg->fields.defRelationId,
                                             0LL);
  v9 = sub_B170CC(BattleLogicClassRelation_DamageRateData_TypeInfo, v5, v6, v7, v8);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_QWORD *)(v9 + 16) = this;
  sub_B16F98(v9 + 16, this);
  *(_BYTE *)(v9 + 36) = 0;
  *(_QWORD *)(v9 + 24) = 0xFFFFFFFFLL;
  *(_DWORD *)(v9 + 32) = -1;
  this->fields._AtkRateData_k__BackingField = (struct BattleLogicClassRelation_DamageRateData_o *)v9;
  sub_B16F98(&this->fields._AtkRateData_k__BackingField, v9);
  v14 = sub_B170CC(BattleLogicClassRelation_DamageRateData_TypeInfo, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98(v14 + 16, this);
  *(_QWORD *)(v14 + 24) = 0xFFFFFFFFLL;
  *(_DWORD *)(v14 + 32) = -1;
  *(_BYTE *)(v14 + 36) = 0;
  this->fields._DefRateData_k__BackingField = (struct BattleLogicClassRelation_DamageRateData_o *)v14;
  sub_B16F98(&this->fields._DefRateData_k__BackingField, v14);
  this->fields._FixRate_k__BackingField = 1.0;
}


void __fastcall BattleLogicClassRelation_ResultData__fixResult(
        BattleLogicClassRelation_ResultData_o *this,
        const MethodInfo *method)
{
  bool IsPriorAttack; // w21
  __int64 v4; // x2
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  BattleLogicClassRelation_DamageRateData_array *v8; // x20
  struct BattleLogicClassRelation_DamageRateData_o *v9; // x21
  struct BattleLogicClassRelation_DamageRateData_o *DefRateData_k__BackingField; // x21
  struct BattleLogicClassRelation_DamageRateData_o *AtkRateData_k__BackingField; // x21
  const MethodInfo *v12; // x2

  if ( (byte_40F854A & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicClassRelation_DamageRateData___TypeInfo, method);
    byte_40F854A = 1;
  }
  IsPriorAttack = BattleLogicClassRelation_ResultData__get_IsPriorAttack(this, method);
  v5 = sub_B17014(BattleLogicClassRelation_DamageRateData___TypeInfo, 2LL, v4);
  v8 = (BattleLogicClassRelation_DamageRateData_array *)v5;
  if ( !IsPriorAttack )
  {
    if ( v5 )
    {
      AtkRateData_k__BackingField = this->fields._AtkRateData_k__BackingField;
      if ( AtkRateData_k__BackingField )
      {
        v5 = sub_B170BC(this->fields._AtkRateData_k__BackingField, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
        if ( !v5 )
          goto LABEL_19;
      }
      if ( !v8->max_length )
        goto LABEL_18;
      v8->m_Items[0] = AtkRateData_k__BackingField;
      sub_B16F98(v8->m_Items, AtkRateData_k__BackingField);
      DefRateData_k__BackingField = this->fields._DefRateData_k__BackingField;
      if ( !DefRateData_k__BackingField )
        goto LABEL_16;
LABEL_15:
      v5 = sub_B170BC(DefRateData_k__BackingField, v8->obj.klass->_1.element_class);
      if ( v5 )
        goto LABEL_16;
LABEL_19:
      sub_B170F4();
      sub_B170A0();
    }
LABEL_20:
    sub_B170D4();
  }
  if ( !v5 )
    goto LABEL_20;
  v9 = this->fields._DefRateData_k__BackingField;
  if ( v9 )
  {
    v5 = sub_B170BC(this->fields._DefRateData_k__BackingField, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
      goto LABEL_19;
  }
  if ( !v8->max_length )
    goto LABEL_18;
  v8->m_Items[0] = v9;
  sub_B16F98(v8->m_Items, v9);
  DefRateData_k__BackingField = this->fields._AtkRateData_k__BackingField;
  if ( DefRateData_k__BackingField )
    goto LABEL_15;
LABEL_16:
  if ( v8->max_length <= 1 )
  {
LABEL_18:
    sub_B17100(v5, v6, v7);
    sub_B170A0();
  }
  v8->m_Items[1] = DefRateData_k__BackingField;
  sub_B16F98(&v8->m_Items[1], DefRateData_k__BackingField);
  this->fields._FixRate_k__BackingField = BattleLogicClassRelation_ResultData__getFixRatePriorityAsc(this, v8, v12);
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
    sub_B170D4();
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
      {
        sub_B17100(this, damageRateArray, method);
        sub_B170A0();
      }
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
    sub_B170D4();
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
    sub_B170D4();
  return DefRateData_k__BackingField->fields._Priority_k__BackingField < AtkRateData_k__BackingField->fields._Priority_k__BackingField;
}


void __fastcall BattleLogicClassRelation_ResultData__set_AtkRateData(
        BattleLogicClassRelation_ResultData_o *this,
        BattleLogicClassRelation_DamageRateData_o *value,
        const MethodInfo *method)
{
  this->fields._AtkRateData_k__BackingField = value;
  sub_B16F98(&this->fields._AtkRateData_k__BackingField, value);
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
  this->fields._DefRateData_k__BackingField = value;
  sub_B16F98(&this->fields._DefRateData_k__BackingField, value);
}


void __fastcall BattleLogicClassRelation_ResultData__set_FixRate(
        BattleLogicClassRelation_ResultData_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._FixRate_k__BackingField = value;
}