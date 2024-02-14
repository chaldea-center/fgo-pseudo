void __fastcall BattleLogicClassRelation___ctor(BattleLogicClassRelation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleLogicClassRelation_Process_array *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  BattleLogicClassRelation_OldAttackOverwriteProcess_o *v10; // x21
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  BattleLogicClassRelation_OldDefenseOverwriteProcess_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  BattleLogicClassRelation_AttackOverwriteProcess_o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  BattleLogicClassRelation_DefenseOverwriteProcess_o *v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x0
  __int64 v52; // x0

  if ( (byte_4216FE6 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicClassRelation_AttackOverwriteProcess_TypeInfo, method);
    sub_B0D8A4(&BattleLogicClassRelation_DefenseOverwriteProcess_TypeInfo, v3);
    sub_B0D8A4(&BattleLogicClassRelation_OldAttackOverwriteProcess_TypeInfo, v4);
    sub_B0D8A4(&BattleLogicClassRelation_OldDefenseOverwriteProcess_TypeInfo, v5);
    sub_B0D8A4(&BattleLogicClassRelation_Process___TypeInfo, v6);
    byte_4216FE6 = 1;
  }
  v7 = (struct BattleLogicClassRelation_Process_array *)sub_B0D8BC(BattleLogicClassRelation_Process___TypeInfo, 4LL);
  v10 = (BattleLogicClassRelation_OldAttackOverwriteProcess_o *)sub_B0D974(
                                                                  BattleLogicClassRelation_OldAttackOverwriteProcess_TypeInfo,
                                                                  v8,
                                                                  v9);
  BattleLogicClassRelation_OldAttackOverwriteProcess___ctor(v10, 0LL);
  if ( !v7 )
    sub_B0D97C(v11);
  if ( v10 )
  {
    v11 = sub_B0D964(v10, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_18;
  }
  if ( !v7->max_length )
    goto LABEL_17;
  v7->m_Items[0] = (BattleLogicClassRelation_Process_o *)v10;
  sub_B0D840((BattleServantConfConponent_o *)v7->m_Items, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
  v20 = (BattleLogicClassRelation_OldDefenseOverwriteProcess_o *)sub_B0D974(
                                                                   BattleLogicClassRelation_OldDefenseOverwriteProcess_TypeInfo,
                                                                   v18,
                                                                   v19);
  BattleLogicClassRelation_OldDefenseOverwriteProcess___ctor(v20, 0LL);
  if ( v20 )
  {
    v11 = sub_B0D964(v20, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_18;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_17;
  v7->m_Items[1] = (BattleLogicClassRelation_Process_o *)v20;
  sub_B0D840((BattleServantConfConponent_o *)&v7->m_Items[1], (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  v29 = (BattleLogicClassRelation_AttackOverwriteProcess_o *)sub_B0D974(
                                                               BattleLogicClassRelation_AttackOverwriteProcess_TypeInfo,
                                                               v27,
                                                               v28);
  BattleLogicClassRelation_AttackOverwriteProcess___ctor(v29, 0LL);
  if ( v29 )
  {
    v11 = sub_B0D964(v29, v7->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_18;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_17;
  v7->m_Items[2] = (BattleLogicClassRelation_Process_o *)v29;
  sub_B0D840((BattleServantConfConponent_o *)&v7->m_Items[2], (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
  v38 = (BattleLogicClassRelation_DefenseOverwriteProcess_o *)sub_B0D974(
                                                                BattleLogicClassRelation_DefenseOverwriteProcess_TypeInfo,
                                                                v36,
                                                                v37);
  BattleLogicClassRelation_DefenseOverwriteProcess___ctor(v38, 0LL);
  if ( v38 )
  {
    v11 = sub_B0D964(v38, v7->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_18:
      v52 = sub_B0D99C(v11);
      sub_B0D948(v52, 0LL);
    }
  }
  if ( v7->max_length <= 3 )
  {
LABEL_17:
    v51 = sub_B0D9A8(v11);
    sub_B0D948(v51, 0LL);
  }
  v7->m_Items[3] = (BattleLogicClassRelation_Process_o *)v38;
  sub_B0D840((BattleServantConfConponent_o *)&v7->m_Items[3], (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44);
  this->fields._procArray = v7;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v45, v46, v47, v48, v49, v50);
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

  if ( (byte_4216FE5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ClassRelationOverwriteMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4216FE5 = 1;
  }
  overwriteMst = this->fields._overwriteMst;
  p_overwriteMst = (BattleServantConfConponent_o *)&this->fields._overwriteMst;
  result = overwriteMst;
  if ( !overwriteMst )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ClassRelationOverwriteMaster___);
    p_overwriteMst->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B0D840(p_overwriteMst, MasterData_WarQuestSelectionMaster, v9, v10, v11, v12, v13, v14);
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
  __int64 v10; // x0

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
      {
        v10 = sub_B0D9A8(this);
        sub_B0D948(v10, 0LL);
      }
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
    sub_B0D97C(this);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  BattleServantData_o *atkSvt; // x0
  BattleServantData_o *defSvt; // x8
  ServantClassMaster_o *v32; // x20
  int32_t RelationId; // w0
  int32_t defClassId; // w1

  if ( (byte_4213934 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, command);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4213934 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.command = command;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)command,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.atkSvt = attackSvt;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.atkSvt,
    (System_Int32_array **)attackSvt,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.defSvt = defenseSvt;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.defSvt,
    (System_Int32_array **)defenseSvt,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
        (atkSvt = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (atkSvt = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)atkSvt,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_B0D97C(atkSvt);
  }
  v32 = (ServantClassMaster_o *)atkSvt;
  RelationId = ServantClassMaster__getRelationId((ServantClassMaster_o *)atkSvt, this->fields.atkClassId, 0LL);
  defClassId = this->fields.defClassId;
  this->fields.atkRelationId = RelationId;
  this->fields.defRelationId = ServantClassMaster__getRelationId(v32, defClassId, 0LL);
}


BattleLogicClassRelation_ResultData_o *__fastcall BattleLogicClassRelation_Argument__initResultData(
        BattleLogicClassRelation_Argument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleLogicClassRelation_ResultData_o *v4; // x20

  if ( (byte_4213935 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicClassRelation_ResultData_TypeInfo, method);
    byte_4213935 = 1;
  }
  v4 = (BattleLogicClassRelation_ResultData_o *)sub_B0D974(BattleLogicClassRelation_ResultData_TypeInfo, method, v2);
  BattleLogicClassRelation_ResultData___ctor(v4, this, 0LL);
  return v4;
}


void __fastcall BattleLogicClassRelation_AttackOverwriteProcess___ctor(
        BattleLogicClassRelation_AttackOverwriteProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicClassRelation_Process___ctor((BattleLogicClassRelation_Process_o *)this, 0LL);
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
  BattleBuffData_BuffData_array *BuffOverwriteClassRelationArray; // x0
  const MethodInfo *v10; // x5

  if ( !result
    || !arg
    || (v6 = (BattleLogicClassRelation_OverwriteProcess_o *)this,
        (this = (BattleLogicClassRelation_AttackOverwriteProcess_o *)arg->fields.atkSvt) == 0LL) )
  {
    sub_B0D97C(this);
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields._Result_k__BackingField = result;
  v4 = (BattleLogicClassRelation_DamageRateData_o *)((char *)v4 + 16);
  sub_B0D840((BattleServantConfConponent_o *)v4, (System_Int32_array **)result, v5, v6, v7, v8, v9, v10);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Result_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicClassRelation_DamageRateData__set_Value(
        BattleLogicClassRelation_DamageRateData_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._Value_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicClassRelation_DamageRateData__updateValue(
        BattleLogicClassRelation_DamageRateData_o *this,
        int32_t priority,
        float value,
        int32_t type,
        BattleLogicClassRelation_Process_o *proc,
        const MethodInfo *method)
{
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  struct BattleLogicClassRelation_Process_o **p_proc; // x0

  if ( this->fields._Priority_k__BackingField >= priority )
    return 0;
  this->fields._proc = proc;
  p_proc = &this->fields._proc;
  *((_DWORD *)p_proc - 4) = priority;
  *((float *)p_proc - 3) = value;
  *((_DWORD *)p_proc - 2) = type;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_proc,
    (System_Int32_array **)proc,
    *(System_String_array ***)&type,
    (System_String_array **)proc,
    (System_Boolean_array **)method,
    v6,
    v7,
    v8);
  return 1;
}


void __fastcall BattleLogicClassRelation_DefenseOverwriteProcess___ctor(
        BattleLogicClassRelation_DefenseOverwriteProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicClassRelation_Process___ctor((BattleLogicClassRelation_Process_o *)this, 0LL);
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
  BattleBuffData_BuffData_array *BuffOverwriteClassRelationArray; // x0
  const MethodInfo *v10; // x5

  if ( !result
    || !arg
    || (v6 = (BattleLogicClassRelation_OverwriteProcess_o *)this,
        (this = (BattleLogicClassRelation_DefenseOverwriteProcess_o *)arg->fields.defSvt) == 0LL) )
  {
    sub_B0D97C(this);
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
  BattleLogicClassRelation_Process___ctor((BattleLogicClassRelation_Process_o *)this, 0LL);
}


void __fastcall BattleLogicClassRelation_OldAttackOverwriteProcess__exec(
        BattleLogicClassRelation_OldAttackOverwriteProcess_o *this,
        BattleLogicClassRelation_o *logic,
        BattleLogicClassRelation_Argument_o *arg,
        BattleLogicClassRelation_ResultData_o *result,
        const MethodInfo *method)
{
  System_Int32_array **v7; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct BattleLogicClassRelation_DamageRateData_o *AtkRateData_k__BackingField; // x20
  int32_t v15; // w8
  float v16; // w9
  float val; // [xsp+Ch] [xbp-24h] BYREF

  v7 = (System_Int32_array **)this;
  if ( (byte_4213936 & 1) == 0 )
  {
    this = (BattleLogicClassRelation_OldAttackOverwriteProcess_o *)sub_B0D8A4(&BattleDataDefine_TypeInfo, logic);
    byte_4213936 = 1;
  }
  val = 0.0;
  if ( !arg )
    goto LABEL_14;
  this = (BattleLogicClassRelation_OldAttackOverwriteProcess_o *)arg->fields.atkSvt;
  if ( !this )
    goto LABEL_14;
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
    goto LABEL_14;
  AtkRateData_k__BackingField = result->fields._AtkRateData_k__BackingField;
  this = (BattleLogicClassRelation_OldAttackOverwriteProcess_o *)BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    this = (BattleLogicClassRelation_OldAttackOverwriteProcess_o *)BattleDataDefine_TypeInfo;
  }
  if ( !AtkRateData_k__BackingField )
LABEL_14:
    sub_B0D97C(this);
  v15 = *(_DWORD *)this[11].monitor;
  if ( AtkRateData_k__BackingField->fields._Priority_k__BackingField < v15 )
  {
    v16 = val;
    AtkRateData_k__BackingField->fields._proc = (struct BattleLogicClassRelation_Process_o *)v7;
    AtkRateData_k__BackingField->fields._Priority_k__BackingField = v15;
    *(_QWORD *)&AtkRateData_k__BackingField->fields._Value_k__BackingField = LODWORD(v16);
    sub_B0D840(
      (BattleServantConfConponent_o *)&AtkRateData_k__BackingField->fields._proc,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
}


void __fastcall BattleLogicClassRelation_OldDefenseOverwriteProcess___ctor(
        BattleLogicClassRelation_OldDefenseOverwriteProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicClassRelation_Process___ctor((BattleLogicClassRelation_Process_o *)this, 0LL);
}


void __fastcall BattleLogicClassRelation_OldDefenseOverwriteProcess__exec(
        BattleLogicClassRelation_OldDefenseOverwriteProcess_o *this,
        BattleLogicClassRelation_o *logic,
        BattleLogicClassRelation_Argument_o *arg,
        BattleLogicClassRelation_ResultData_o *result,
        const MethodInfo *method)
{
  System_Int32_array **v7; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct BattleLogicClassRelation_DamageRateData_o *DefRateData_k__BackingField; // x20
  int32_t v15; // w8
  float v16; // w9
  float val; // [xsp+Ch] [xbp-24h] BYREF

  v7 = (System_Int32_array **)this;
  if ( (byte_4213937 & 1) == 0 )
  {
    this = (BattleLogicClassRelation_OldDefenseOverwriteProcess_o *)sub_B0D8A4(&BattleDataDefine_TypeInfo, logic);
    byte_4213937 = 1;
  }
  val = 0.0;
  if ( !arg )
    goto LABEL_14;
  this = (BattleLogicClassRelation_OldDefenseOverwriteProcess_o *)arg->fields.defSvt;
  if ( !this )
    goto LABEL_14;
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
    goto LABEL_14;
  DefRateData_k__BackingField = result->fields._DefRateData_k__BackingField;
  this = (BattleLogicClassRelation_OldDefenseOverwriteProcess_o *)BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    this = (BattleLogicClassRelation_OldDefenseOverwriteProcess_o *)BattleDataDefine_TypeInfo;
  }
  if ( !DefRateData_k__BackingField )
LABEL_14:
    sub_B0D97C(this);
  v15 = *((_DWORD *)this[11].monitor + 1);
  if ( DefRateData_k__BackingField->fields._Priority_k__BackingField < v15 )
  {
    v16 = val;
    DefRateData_k__BackingField->fields._proc = (struct BattleLogicClassRelation_Process_o *)v7;
    DefRateData_k__BackingField->fields._Priority_k__BackingField = v15;
    *(_QWORD *)&DefRateData_k__BackingField->fields._Value_k__BackingField = LODWORD(v16);
    sub_B0D840(
      (BattleServantConfConponent_o *)&DefRateData_k__BackingField->fields._proc,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
}


void __fastcall BattleLogicClassRelation_OverwriteProcess___ctor(
        BattleLogicClassRelation_OverwriteProcess_o *this,
        const MethodInfo *method)
{
  BattleLogicClassRelation_Process___ctor((BattleLogicClassRelation_Process_o *)this, 0LL);
}


int32_t __fastcall BattleLogicClassRelation_OverwriteProcess___overwriteDamageRate_b__4_0(
        BattleLogicClassRelation_OverwriteProcess_o *this,
        BattleBuffData_BuffData_o *b1,
        BattleBuffData_BuffData_o *b2,
        const MethodInfo *method)
{
  __int64 v6; // x0
  const MethodInfo *v7; // x3

  v6 = ((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, const char *, BattleBuffData_BuffData_o *, const MethodInfo *))this->klass[1]._1.gc_desc)(
         this,
         this->klass[1]._1.name,
         b2,
         method);
  if ( !b1 )
    sub_B0D97C(v6);
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
    sub_B0D97C(this);
  GeneralType_k__BackingField = self->fields._GeneralType_k__BackingField;
  if ( GeneralType_k__BackingField == 2 )
    return UnityEngine_Mathf__Max(self->fields._Value_k__BackingField, compRate, 0LL);
  if ( GeneralType_k__BackingField == 1 )
    return UnityEngine_Mathf__Min(self->fields._Value_k__BackingField, compRate, 0LL);
  return BattleLogicClassRelation_Process__getFixRate((BattleLogicClassRelation_Process_o *)this, self, compRate, 0LL);
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
  ClassRelationOverwriteMaster_o *OverwriteMst; // x0
  signed int max_length; // w8
  unsigned int v17; // w27
  BattleBuffData_BuffData_o *v18; // x24
  struct BattleBuffData_RelationOverwriteData_o *relationOverwrite; // x28
  int32_t id; // w26
  ClassRelationOverwriteMaster_o *v21; // x25
  __int64 v22; // x9
  int32_t v23; // w25
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  float Rate; // s0
  int32_t type; // w8
  __int64 v32; // x8
  __int64 v33; // x8
  __int64 v34; // x0
  ClassRelationOverwriteEntity_o *outEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4213938 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_BattleBuffData_BuffData___, logic);
    sub_B0D8A4(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, v11);
    sub_B0D8A4(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v12);
    sub_B0D8A4(&Method_BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate_b__4_0__, v13);
    byte_4213938 = 1;
  }
  v14 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                    System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                    logic,
                                                                    arg);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate_b__4_0__,
    (const MethodInfo_2412E90 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
  System_Array__Sort_BattleBuffData_BuffData_(
    buffArray,
    (System_Comparison_T__o *)v14,
    (const MethodInfo_23398EC *)Method_System_Array_Sort_BattleBuffData_BuffData___);
  outEnt = 0LL;
  if ( !buffArray )
    goto LABEL_28;
  max_length = buffArray->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
        v34 = sub_B0D9A8(OverwriteMst);
        sub_B0D948(v34, 0LL);
      }
      v18 = buffArray->m_Items[v17];
      if ( !v18 )
        goto LABEL_28;
      if ( !logic )
        goto LABEL_28;
      relationOverwrite = v18->fields.relationOverwrite;
      OverwriteMst = BattleLogicClassRelation__get_OverwriteMst(logic, 0LL);
      if ( !relationOverwrite )
        goto LABEL_28;
      id = relationOverwrite->fields.id;
      v21 = OverwriteMst;
      OverwriteMst = (ClassRelationOverwriteMaster_o *)((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, const char *))this->klass[1]._1.gc_desc)(
                                                         this,
                                                         this->klass[1]._1.name);
      if ( !arg || !v21 )
        goto LABEL_28;
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
        OverwriteMst = (ClassRelationOverwriteMaster_o *)((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, const char *))this->klass[1]._1.gc_desc)(
                                                           this,
                                                           this->klass[1]._1.name);
        v22 = 24LL;
        if ( ((unsigned __int8)OverwriteMst & 1) != 0 )
          v22 = 20LL;
        if ( !outEnt )
          goto LABEL_28;
        v23 = *(_DWORD *)((char *)&relationOverwrite->klass + v22);
        Rate = ClassRelationOverwriteEntity__getRate(outEnt, 0LL);
        if ( !outEnt || !damageRate )
          goto LABEL_28;
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
    sub_B0D840(
      (BattleServantConfConponent_o *)&damageRate->fields._proc,
      (System_Int32_array **)this,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    if ( arg->fields.isAction )
    {
      OverwriteMst = (ClassRelationOverwriteMaster_o *)((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, const char *))this->klass[1]._1.gc_desc)(
                                                         this,
                                                         this->klass[1]._1.name);
      v32 = 32LL;
      if ( ((unsigned __int8)OverwriteMst & 1) != 0 )
        v32 = 24LL;
      v33 = *(__int64 *)((char *)&arg->klass + v32);
      if ( v33 )
      {
        OverwriteMst = *(ClassRelationOverwriteMaster_o **)(v33 + 760);
        if ( OverwriteMst )
        {
          BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)OverwriteMst, v18, arg->fields.isAction, 0LL);
          return;
        }
      }
LABEL_28:
      sub_B0D97C(OverwriteMst);
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
    sub_B0D97C(this);
  return self->fields._Value_k__BackingField;
}


void __fastcall BattleLogicClassRelation_ResultData___ctor(
        BattleLogicClassRelation_ResultData_o *this,
        BattleLogicClassRelation_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  BattleLogicClassRelation_DamageRateData_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  BattleLogicClassRelation_DamageRateData_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4213B91 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicClassRelation_DamageRateData_TypeInfo, arg);
    byte_4213B91 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !arg )
    sub_B0D97C(v5);
  this->fields._BaseRate_k__BackingField = ClassRelationMaster__getRate(
                                             arg->fields.atkRelationId,
                                             arg->fields.defRelationId,
                                             0LL);
  v8 = (BattleLogicClassRelation_DamageRateData_o *)sub_B0D974(BattleLogicClassRelation_DamageRateData_TypeInfo, v6, v7);
  BattleLogicClassRelation_DamageRateData___ctor(v8, this, 0LL);
  this->fields._AtkRateData_k__BackingField = v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._AtkRateData_k__BackingField,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v17 = (BattleLogicClassRelation_DamageRateData_o *)sub_B0D974(
                                                       BattleLogicClassRelation_DamageRateData_TypeInfo,
                                                       v15,
                                                       v16);
  BattleLogicClassRelation_DamageRateData___ctor(v17, this, 0LL);
  this->fields._DefRateData_k__BackingField = v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._DefRateData_k__BackingField,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._FixRate_k__BackingField = 1.0;
}


void __fastcall BattleLogicClassRelation_ResultData__fixResult(
        BattleLogicClassRelation_ResultData_o *this,
        const MethodInfo *method)
{
  bool IsPriorAttack; // w21
  __int64 v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleLogicClassRelation_DamageRateData_array *v11; // x20
  System_Int32_array **v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **DefRateData_k__BackingField; // x21
  System_Int32_array **AtkRateData_k__BackingField; // x21
  const MethodInfo *v21; // x2
  __int64 v22; // x0
  __int64 v23; // x0

  if ( (byte_4213B92 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicClassRelation_DamageRateData___TypeInfo, method);
    byte_4213B92 = 1;
  }
  IsPriorAttack = BattleLogicClassRelation_ResultData__get_IsPriorAttack(this, method);
  v4 = sub_B0D8BC(BattleLogicClassRelation_DamageRateData___TypeInfo, 2LL);
  v11 = (BattleLogicClassRelation_DamageRateData_array *)v4;
  if ( !IsPriorAttack )
  {
    if ( v4 )
    {
      AtkRateData_k__BackingField = (System_Int32_array **)this->fields._AtkRateData_k__BackingField;
      if ( AtkRateData_k__BackingField )
      {
        v4 = sub_B0D964(this->fields._AtkRateData_k__BackingField, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
        if ( !v4 )
          goto LABEL_19;
      }
      if ( !v11->max_length )
        goto LABEL_18;
      v11->m_Items[0] = (BattleLogicClassRelation_DamageRateData_o *)AtkRateData_k__BackingField;
      sub_B0D840((BattleServantConfConponent_o *)v11->m_Items, AtkRateData_k__BackingField, v5, v6, v7, v8, v9, v10);
      DefRateData_k__BackingField = (System_Int32_array **)this->fields._DefRateData_k__BackingField;
      if ( !DefRateData_k__BackingField )
        goto LABEL_16;
LABEL_15:
      v4 = sub_B0D964(DefRateData_k__BackingField, v11->obj.klass->_1.element_class);
      if ( v4 )
        goto LABEL_16;
LABEL_19:
      v23 = sub_B0D99C();
      sub_B0D948(v23, 0LL);
    }
LABEL_20:
    sub_B0D97C(v4);
  }
  if ( !v4 )
    goto LABEL_20;
  v12 = (System_Int32_array **)this->fields._DefRateData_k__BackingField;
  if ( v12 )
  {
    v4 = sub_B0D964(this->fields._DefRateData_k__BackingField, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
    if ( !v4 )
      goto LABEL_19;
  }
  if ( !v11->max_length )
    goto LABEL_18;
  v11->m_Items[0] = (BattleLogicClassRelation_DamageRateData_o *)v12;
  sub_B0D840((BattleServantConfConponent_o *)v11->m_Items, v12, v5, v6, v7, v8, v9, v10);
  DefRateData_k__BackingField = (System_Int32_array **)this->fields._AtkRateData_k__BackingField;
  if ( DefRateData_k__BackingField )
    goto LABEL_15;
LABEL_16:
  if ( v11->max_length <= 1 )
  {
LABEL_18:
    v22 = sub_B0D9A8(v4);
    sub_B0D948(v22, 0LL);
  }
  v11->m_Items[1] = (BattleLogicClassRelation_DamageRateData_o *)DefRateData_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v11->m_Items[1],
    DefRateData_k__BackingField,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields._FixRate_k__BackingField = BattleLogicClassRelation_ResultData__getFixRatePriorityAsc(this, v11, v21);
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
    sub_B0D97C(this);
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
  signed int max_length; // w8
  float BaseRate_k__BackingField; // s8
  unsigned int v6; // w21
  Il2CppClass **v7; // x8
  BattleLogicClassRelation_DamageRateData_o *v8; // x20
  __int64 v10; // x0

  if ( !damageRateArray )
    goto LABEL_11;
  max_length = damageRateArray->max_length;
  BaseRate_k__BackingField = this->fields._BaseRate_k__BackingField;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v10 = sub_B0D9A8(this);
        sub_B0D948(v10, 0LL);
      }
      v7 = &damageRateArray->obj.klass + (int)v6;
      v8 = (BattleLogicClassRelation_DamageRateData_o *)v7[4];
      if ( !v8 )
        break;
      this = (BattleLogicClassRelation_ResultData_o *)BattleLogicClassRelation_DamageRateData__get_IsAction(
                                                        (BattleLogicClassRelation_DamageRateData_o *)v7[4],
                                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        BaseRate_k__BackingField = BattleLogicClassRelation_DamageRateData__getFixRate(
                                     v8,
                                     BaseRate_k__BackingField,
                                     0LL);
      max_length = damageRateArray->max_length;
      if ( (int)++v6 >= max_length )
        return BaseRate_k__BackingField;
    }
LABEL_11:
    sub_B0D97C(this);
  }
  return BaseRate_k__BackingField;
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
    sub_B0D97C(this);
  return DefRateData_k__BackingField->fields._Priority_k__BackingField < AtkRateData_k__BackingField->fields._Priority_k__BackingField;
}


void __fastcall BattleLogicClassRelation_ResultData__set_AtkRateData(
        BattleLogicClassRelation_ResultData_o *this,
        BattleLogicClassRelation_DamageRateData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._AtkRateData_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._AtkRateData_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._DefRateData_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._DefRateData_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicClassRelation_ResultData__set_FixRate(
        BattleLogicClassRelation_ResultData_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._FixRate_k__BackingField = value;
}