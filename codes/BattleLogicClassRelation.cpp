void __fastcall BattleLogicClassRelation___ctor(BattleLogicClassRelation_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattleLogicClassRelation_Process_array *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  Il2CppObject *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  Il2CppObject *v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  Il2CppObject *v38; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  Il2CppObject *v48; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  __int64 v61; // x0

  if ( (byte_4B18DE8 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicClassRelation_AttackOverwriteProcess_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleLogicClassRelation_DefenseOverwriteProcess_TypeInfo, v4, v5);
    sub_1BCA7E0(&BattleLogicClassRelation_OldAttackOverwriteProcess_TypeInfo, v6, v7);
    sub_1BCA7E0(&BattleLogicClassRelation_OldDefenseOverwriteProcess_TypeInfo, v8, v9);
    sub_1BCA7E0(&BattleLogicClassRelation_Process___TypeInfo, v10, v11);
    byte_4B18DE8 = 1;
  }
  v12 = (struct BattleLogicClassRelation_Process_array *)sub_1BCA888(BattleLogicClassRelation_Process___TypeInfo, 4LL);
  v16 = (Il2CppObject *)sub_1BCAA2C(BattleLogicClassRelation_OldAttackOverwriteProcess_TypeInfo, v13, v14, v15);
  System_Object___ctor(v16, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v17, v18);
  if ( v16 )
  {
    v17 = sub_1BCA91C(v16, v12->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_18;
  }
  if ( !v12->max_length )
    goto LABEL_17;
  v12->m_Items[0] = (BattleLogicClassRelation_Process_o *)v16;
  sub_1BCA784((PartyOrganizationUtility_o *)v12->m_Items, (int64_t)v16, v19, v20, v21, v22, v23, v24);
  v28 = (Il2CppObject *)sub_1BCAA2C(BattleLogicClassRelation_OldDefenseOverwriteProcess_TypeInfo, v25, v26, v27);
  System_Object___ctor(v28, 0LL);
  if ( v28 )
  {
    v17 = sub_1BCA91C(v28, v12->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_18;
  }
  if ( v12->max_length <= 1 )
    goto LABEL_17;
  v12->m_Items[1] = (BattleLogicClassRelation_Process_o *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[1], (int64_t)v28, v29, v30, v31, v32, v33, v34);
  v38 = (Il2CppObject *)sub_1BCAA2C(BattleLogicClassRelation_AttackOverwriteProcess_TypeInfo, v35, v36, v37);
  System_Object___ctor(v38, 0LL);
  if ( v38 )
  {
    v17 = sub_1BCA91C(v38, v12->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_18;
  }
  if ( v12->max_length <= 2 )
    goto LABEL_17;
  v12->m_Items[2] = (BattleLogicClassRelation_Process_o *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[2], (int64_t)v38, v39, v40, v41, v42, v43, v44);
  v48 = (Il2CppObject *)sub_1BCAA2C(BattleLogicClassRelation_DefenseOverwriteProcess_TypeInfo, v45, v46, v47);
  System_Object___ctor(v48, 0LL);
  if ( v48 )
  {
    v17 = sub_1BCA91C(v48, v12->obj.klass->_1.element_class);
    if ( !v17 )
    {
LABEL_18:
      v61 = sub_1BCAA60(v17);
      sub_1BCA908(v61, 0LL);
    }
  }
  if ( v12->max_length <= 3 )
LABEL_17:
    sub_1BCAA44(v17, v18);
  v12->m_Items[3] = (BattleLogicClassRelation_Process_o *)v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[3], (int64_t)v48, v49, v50, v51, v52, v53, v54);
  this->fields._procArray = v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v12, v55, v56, v57, v58, v59, v60);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ClassRelationOverwriteMaster_o *__fastcall BattleLogicClassRelation__get_OverwriteMst(
        BattleLogicClassRelation_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ClassRelationOverwriteMaster_o *result; // x0
  PartyOrganizationUtility_o *p_overwriteMst; // x19
  ClassRelationOverwriteMaster_o *overwriteMst; // t1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B18DE7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ClassRelationOverwriteMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B18DE7 = 1;
  }
  overwriteMst = this->fields._overwriteMst;
  p_overwriteMst = (PartyOrganizationUtility_o *)&this->fields._overwriteMst;
  result = overwriteMst;
  if ( !overwriteMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v10);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ClassRelationOverwriteMaster___);
    p_overwriteMst->klass = (PartyOrganizationUtility_c *)MasterData_object;
    sub_1BCA784(p_overwriteMst, (int64_t)MasterData_object, v12, v13, v14, v15, v16, v17);
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
        sub_1BCAA44(this, arg);
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
    sub_1BCAA3C(this, arg);
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
  __int64 v12; // x2
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  BattleServantData_o *atkSvt; // x0
  BattleServantData_o *defSvt; // x8
  ServantClassMaster_o *v34; // x20
  int32_t RelationId; // w0
  int32_t defClassId; // w1

  if ( (byte_4B18DE9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, command, attackSvt);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B18DE9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.command = command;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)command, v13, v14, v15, v16, v17, v18);
  this->fields.atkSvt = attackSvt;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.atkSvt, (int64_t)attackSvt, v19, v20, v21, v22, v23, v24);
  this->fields.defSvt = defenseSvt;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.defSvt, (int64_t)defenseSvt, v25, v26, v27, v28, v29, v30);
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
        (atkSvt = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (atkSvt = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)atkSvt,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
  {
    sub_1BCAA3C(atkSvt, v31);
  }
  v34 = (ServantClassMaster_o *)atkSvt;
  RelationId = ServantClassMaster__getRelationId((ServantClassMaster_o *)atkSvt, this->fields.atkClassId, 0LL);
  defClassId = this->fields.defClassId;
  this->fields.atkRelationId = RelationId;
  this->fields.defRelationId = ServantClassMaster__getRelationId(v34, defClassId, 0LL);
}


BattleLogicClassRelation_ResultData_o *__fastcall BattleLogicClassRelation_Argument__initResultData(
        BattleLogicClassRelation_Argument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleLogicClassRelation_ResultData_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4B18DEA & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicClassRelation_ResultData_TypeInfo, method, v2);
    byte_4B18DEA = 1;
  }
  v5 = (BattleLogicClassRelation_ResultData_o *)sub_1BCAA2C(
                                                  BattleLogicClassRelation_ResultData_TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
  BattleLogicClassRelation_ResultData___ctor(v5, this, v6);
  return v5;
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
    sub_1BCAA3C(this, logic);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields._Result_k__BackingField = result;
  v4 = (BattleLogicClassRelation_DamageRateData_o *)((char *)v4 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)v4, (int64_t)result, v5, v6, v7, v8, v9, v10);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Result_k__BackingField = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)p_proc,
      (int64_t)proc,
      *(int64_t *)&type,
      (int32_t)proc,
      (System_String_o *)method,
      v6,
      v7,
      v8);
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
    sub_1BCAA3C(this, logic);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct BattleLogicClassRelation_DamageRateData_o *AtkRateData_k__BackingField; // x20
  int32_t v15; // w8
  float v16; // s0
  float val; // [xsp+Ch] [xbp-24h] BYREF

  v7 = this;
  if ( (byte_4B18DEE & 1) == 0 )
  {
    this = (BattleLogicClassRelation_OldAttackOverwriteProcess_o *)sub_1BCA7E0(&BattleDataDefine_TypeInfo, logic, arg);
    byte_4B18DEE = 1;
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
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, logic);
    this = (BattleLogicClassRelation_OldAttackOverwriteProcess_o *)BattleDataDefine_TypeInfo;
  }
  if ( !AtkRateData_k__BackingField )
LABEL_13:
    sub_1BCAA3C(this, logic);
  v15 = *(_DWORD *)this[11].monitor;
  if ( AtkRateData_k__BackingField->fields._Priority_k__BackingField < v15 )
  {
    v16 = val;
    AtkRateData_k__BackingField->fields._proc = (struct BattleLogicClassRelation_Process_o *)v7;
    AtkRateData_k__BackingField->fields._Priority_k__BackingField = v15;
    AtkRateData_k__BackingField->fields._Value_k__BackingField = v16;
    AtkRateData_k__BackingField->fields._GeneralType_k__BackingField = 0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&AtkRateData_k__BackingField->fields._proc,
      (int64_t)v7,
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct BattleLogicClassRelation_DamageRateData_o *DefRateData_k__BackingField; // x20
  int32_t v15; // w8
  float v16; // s0
  float val; // [xsp+Ch] [xbp-24h] BYREF

  v7 = this;
  if ( (byte_4B18DEF & 1) == 0 )
  {
    this = (BattleLogicClassRelation_OldDefenseOverwriteProcess_o *)sub_1BCA7E0(&BattleDataDefine_TypeInfo, logic, arg);
    byte_4B18DEF = 1;
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
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, logic);
    this = (BattleLogicClassRelation_OldDefenseOverwriteProcess_o *)BattleDataDefine_TypeInfo;
  }
  if ( !DefRateData_k__BackingField )
LABEL_13:
    sub_1BCAA3C(this, logic);
  v15 = *((_DWORD *)this[11].monitor + 1);
  if ( DefRateData_k__BackingField->fields._Priority_k__BackingField < v15 )
  {
    v16 = val;
    DefRateData_k__BackingField->fields._proc = (struct BattleLogicClassRelation_Process_o *)v7;
    DefRateData_k__BackingField->fields._Priority_k__BackingField = v15;
    DefRateData_k__BackingField->fields._Value_k__BackingField = v16;
    DefRateData_k__BackingField->fields._GeneralType_k__BackingField = 0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&DefRateData_k__BackingField->fields._proc,
      (int64_t)v7,
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
    sub_1BCAA3C(v6, v7);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Comparison_T__o *v15; // x24
  ClassRelationOverwriteMaster_o *OverwriteMst; // x0
  const MethodInfo *v17; // x1
  signed int max_length; // w8
  unsigned int v19; // w28
  BattleBuffData_BuffData_o *v20; // x24
  BattleBuffData_RelationOverwriteData_o *relationOverwrite; // x25
  int32_t id; // w27
  ClassRelationOverwriteMaster_o *v23; // x26
  char v24; // w0
  int32_t v25; // w25
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  float Rate; // s0
  int32_t type; // w8
  __int64 v34; // x8
  __int64 v35; // x8
  ClassRelationOverwriteEntity_o *outEnt; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B18DED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Sort_BattleBuffData_BuffData___, logic, arg);
    sub_1BCA7E0(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate_b__4_0__, v13, v14);
    byte_4B18DED = 1;
  }
  v15 = (System_Comparison_T__o *)sub_1BCAA2C(
                                    System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                    logic,
                                    arg,
                                    damageRate);
  System_Comparison_object____ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleLogicClassRelation_OverwriteProcess__overwriteDamageRate_b__4_0__,
    0LL);
  System_Array__Sort_object__49153980(
    (System_Object_array *)buffArray,
    v15,
    (const MethodInfo_2EE07BC *)Method_System_Array_Sort_BattleBuffData_BuffData___);
  outEnt = 0LL;
  if ( !buffArray )
    goto LABEL_26;
  max_length = buffArray->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1BCAA44(OverwriteMst, v17);
      v20 = buffArray->m_Items[v19];
      if ( !v20 )
        goto LABEL_26;
      if ( !logic )
        goto LABEL_26;
      relationOverwrite = v20->fields.relationOverwrite;
      OverwriteMst = BattleLogicClassRelation__get_OverwriteMst(logic, v17);
      if ( !relationOverwrite )
        goto LABEL_26;
      id = relationOverwrite->fields.id;
      v23 = OverwriteMst;
      OverwriteMst = (ClassRelationOverwriteMaster_o *)((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, const char *))this->klass[1]._1.gc_desc)(
                                                         this,
                                                         this->klass[1]._1.name);
      if ( !arg || !v23 )
        goto LABEL_26;
      OverwriteMst = (ClassRelationOverwriteMaster_o *)ClassRelationOverwriteMaster__getEntity(
                                                         v23,
                                                         &outEnt,
                                                         id,
                                                         (unsigned __int8)OverwriteMst & 1,
                                                         arg->fields.atkRelationId,
                                                         arg->fields.defRelationId,
                                                         0LL);
      if ( ((unsigned __int8)OverwriteMst & 1) != 0 )
      {
        v24 = ((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, const char *))this->klass[1]._1.gc_desc)(
                this,
                this->klass[1]._1.name);
        OverwriteMst = (ClassRelationOverwriteMaster_o *)BattleBuffData_RelationOverwriteData__getPriority(
                                                           relationOverwrite,
                                                           v24 & 1,
                                                           0LL);
        if ( !outEnt )
          goto LABEL_26;
        v25 = (int)OverwriteMst;
        Rate = ClassRelationOverwriteEntity__getRate(outEnt, 0LL);
        if ( !outEnt || !damageRate )
          goto LABEL_26;
        if ( damageRate->fields._Priority_k__BackingField < v25 )
          break;
      }
      max_length = buffArray->max_length;
      if ( (int)++v19 >= max_length )
        return;
    }
    type = outEnt->fields.type;
    damageRate->fields._proc = (struct BattleLogicClassRelation_Process_o *)this;
    damageRate->fields._Priority_k__BackingField = v25;
    damageRate->fields._Value_k__BackingField = Rate;
    damageRate->fields._GeneralType_k__BackingField = type;
    sub_1BCA784((PartyOrganizationUtility_o *)&damageRate->fields._proc, (int64_t)this, v26, v27, v28, v29, v30, v31);
    if ( arg->fields.isAction )
    {
      OverwriteMst = (ClassRelationOverwriteMaster_o *)((__int64 (__fastcall *)(BattleLogicClassRelation_OverwriteProcess_o *, const char *))this->klass[1]._1.gc_desc)(
                                                         this,
                                                         this->klass[1]._1.name);
      v34 = 32LL;
      if ( ((unsigned __int8)OverwriteMst & 1) != 0 )
        v34 = 24LL;
      v35 = *(__int64 *)((char *)&arg->klass + v34);
      if ( v35 )
      {
        OverwriteMst = *(ClassRelationOverwriteMaster_o **)(v35 + 792);
        if ( OverwriteMst )
        {
          BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)OverwriteMst, v20, arg->fields.isAction, 0LL);
          return;
        }
      }
LABEL_26:
      sub_1BCAA3C(OverwriteMst, v17);
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
    sub_1BCAA3C(this, 0LL);
  return self->fields._Value_k__BackingField;
}


void __fastcall BattleLogicClassRelation_ResultData___ctor(
        BattleLogicClassRelation_ResultData_o *this,
        BattleLogicClassRelation_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  int64_t v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  int64_t v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct BattleLogicClassRelation_DamageRateData_o **p_DefRateData_k__BackingField; // x19
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B18DEB & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicClassRelation_DamageRateData_TypeInfo, arg, method);
    byte_4B18DEB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !arg )
    sub_1BCAA3C(v5, v6);
  this->fields._BaseRate_k__BackingField = ClassRelationMaster__getRate(
                                             arg->fields.atkRelationId,
                                             arg->fields.defRelationId,
                                             0LL);
  v10 = sub_1BCAA2C(BattleLogicClassRelation_DamageRateData_TypeInfo, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_BYTE *)(v10 + 36) = 0;
  *(_QWORD *)(v10 + 24) = 0xFFFFFFFFLL;
  *(_DWORD *)(v10 + 32) = -1;
  this->fields._AtkRateData_k__BackingField = (struct BattleLogicClassRelation_DamageRateData_o *)v10;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._AtkRateData_k__BackingField,
    v10,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v26 = sub_1BCAA2C(BattleLogicClassRelation_DamageRateData_TypeInfo, v23, v24, v25);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  *(_QWORD *)(v26 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)this, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v26 + 24) = 0xFFFFFFFFLL;
  *(_DWORD *)(v26 + 32) = -1;
  *(_BYTE *)(v26 + 36) = 0;
  this->fields._DefRateData_k__BackingField = (struct BattleLogicClassRelation_DamageRateData_o *)v26;
  p_DefRateData_k__BackingField = &this->fields._DefRateData_k__BackingField;
  sub_1BCA784((PartyOrganizationUtility_o *)p_DefRateData_k__BackingField, v26, v34, v35, v36, v37, v38, v39);
  *((_DWORD *)p_DefRateData_k__BackingField + 2) = 1065353216;
}


void __fastcall BattleLogicClassRelation_ResultData__fixResult(
        BattleLogicClassRelation_ResultData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  bool IsPriorAttack; // w21
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  BattleLogicClassRelation_DamageRateData_array *v13; // x20
  struct BattleLogicClassRelation_DamageRateData_o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct BattleLogicClassRelation_DamageRateData_o *DefRateData_k__BackingField; // x21
  struct BattleLogicClassRelation_DamageRateData_o *AtkRateData_k__BackingField; // x21
  const MethodInfo *v23; // x2
  __int64 v24; // x0

  if ( (byte_4B18DEC & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicClassRelation_DamageRateData___TypeInfo, method, v2);
    byte_4B18DEC = 1;
  }
  IsPriorAttack = BattleLogicClassRelation_ResultData__get_IsPriorAttack(this, method);
  v5 = sub_1BCA888(BattleLogicClassRelation_DamageRateData___TypeInfo, 2LL);
  v13 = (BattleLogicClassRelation_DamageRateData_array *)v5;
  if ( !IsPriorAttack )
  {
    if ( v5 )
    {
      AtkRateData_k__BackingField = this->fields._AtkRateData_k__BackingField;
      if ( AtkRateData_k__BackingField )
      {
        v5 = sub_1BCA91C(this->fields._AtkRateData_k__BackingField, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
        if ( !v5 )
          goto LABEL_19;
      }
      if ( !v13->max_length )
        goto LABEL_18;
      v13->m_Items[0] = AtkRateData_k__BackingField;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)v13->m_Items,
        (int64_t)AtkRateData_k__BackingField,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      DefRateData_k__BackingField = this->fields._DefRateData_k__BackingField;
      if ( !DefRateData_k__BackingField )
        goto LABEL_16;
LABEL_15:
      v5 = sub_1BCA91C(DefRateData_k__BackingField, v13->obj.klass->_1.element_class);
      if ( v5 )
        goto LABEL_16;
LABEL_19:
      v24 = sub_1BCAA60(v5);
      sub_1BCA908(v24, 0LL);
    }
LABEL_20:
    sub_1BCAA3C(v5, v6);
  }
  if ( !v5 )
    goto LABEL_20;
  v14 = this->fields._DefRateData_k__BackingField;
  if ( v14 )
  {
    v5 = sub_1BCA91C(this->fields._DefRateData_k__BackingField, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
      goto LABEL_19;
  }
  if ( !v13->max_length )
    goto LABEL_18;
  v13->m_Items[0] = v14;
  sub_1BCA784((PartyOrganizationUtility_o *)v13->m_Items, (int64_t)v14, v7, v8, v9, v10, v11, v12);
  DefRateData_k__BackingField = this->fields._AtkRateData_k__BackingField;
  if ( DefRateData_k__BackingField )
    goto LABEL_15;
LABEL_16:
  if ( v13->max_length <= 1 )
LABEL_18:
    sub_1BCAA44(v5, v6);
  v13->m_Items[1] = DefRateData_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v13->m_Items[1],
    (int64_t)DefRateData_k__BackingField,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields._FixRate_k__BackingField = BattleLogicClassRelation_ResultData__getFixRatePriorityAsc(this, v13, v23);
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
    sub_1BCAA3C(this, damageRate);
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
        sub_1BCAA44(this, damageRateArray);
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
    sub_1BCAA3C(this, damageRateArray);
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
    sub_1BCAA3C(this, method);
  return DefRateData_k__BackingField->fields._Priority_k__BackingField < AtkRateData_k__BackingField->fields._Priority_k__BackingField;
}


void __fastcall BattleLogicClassRelation_ResultData__set_AtkRateData(
        BattleLogicClassRelation_ResultData_o *this,
        BattleLogicClassRelation_DamageRateData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AtkRateData_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._AtkRateData_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._DefRateData_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._DefRateData_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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