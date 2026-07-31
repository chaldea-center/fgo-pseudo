// local variable allocation has failed, the output may be wrong!
void CharaGraphListViewPatternGrandEquipBond___ctor(
        CharaGraphListViewPatternGrandEquipBond_o *this,
        System_Int64_array *otherEquipUserSvtIds,
        GrandServantListSlotData_o *grandSvtSlotData,
        int32_t grandSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Master_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *Entity; // x0
  __int64 v26; // x1
  struct System_Collections_Generic_HashSet_int__o *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_5933205 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToHashSet_int___);
    byte_5933205 = 1;
  }
  CharaGraphListViewPatternGrandEquipNormal___ctor(
    (CharaGraphListViewPatternGrandEquipNormal_o *)this,
    otherEquipUserSvtIds,
    grandSvtSlotData,
    *(const MethodInfo **)&grandSvtId);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  this->fields.svtSkillMaster = (struct ServantSkillMaster_o *)Master_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtSkillMaster,
    (int32_t)Master_object,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
  this->fields.skillMaster = (struct SkillMaster_o *)v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.skillMaster, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  Entity = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Entity,
                   grandSvtId,
                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_21FFECC(Entity, v26);
  }
  v27 = (struct System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__ToHashSet_int_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)Entity[11].klass,
                                                              (const MethodInfo_386D418 *)Method_System_Linq_Enumerable_ToHashSet_int___);
  this->fields.individuality = v27;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.individuality,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


bool CharaGraphListViewPatternGrandEquipBond__Filter(
        CharaGraphListViewPatternGrandEquipBond_o *this,
        UserServantEntity_o *userEquipEntity,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *klass; // x21
  ServantSkillMaster_o *monitor; // x22
  __int64 v9; // x20
  __int64 v10; // x23
  System_Int32_array *ActIndividuality; // x20
  System_Func_int__bool__o *v12; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v4 = (Il2CppObject *)this;
  if ( (byte_5933206 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&Method_CharaGraphListViewPatternGrandEquipBond__Filter_b__4_0__);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    this = (CharaGraphListViewPatternGrandEquipBond_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5933206 = 1;
  }
  if ( !userEquipEntity )
    goto LABEL_13;
  if ( UserServantEntity__IsFriendShipSvtEquip(userEquipEntity, 0) )
  {
    monitor = (ServantSkillMaster_o *)v4[4].monitor;
    klass = (DataMasterBase_TMaster__TEntity__PKType__o *)v4[5].klass;
    v10 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    *(_QWORD *)&v14.fields.currentCryptoKey = v10;
    *(_QWORD *)&v14.fields.fakeValue = v9;
    this = (CharaGraphListViewPatternGrandEquipBond_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                          v14,
                                                          0);
    if ( monitor )
    {
      this = (CharaGraphListViewPatternGrandEquipBond_o *)ServantSkillMaster__GetEntity(monitor, (int32_t)this, 1, 1, 0);
      if ( this )
      {
        if ( klass )
        {
          this = (CharaGraphListViewPatternGrandEquipBond_o *)DataMasterBase_object__object__int___GetEntity(
                                                                klass,
                                                                HIDWORD(this->fields._RootInfo_k__BackingField),
                                                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( this )
          {
            ActIndividuality = SkillEntity__getActIndividuality((SkillEntity_o *)this, 0);
            v12 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(v12, v4, Method_CharaGraphListViewPatternGrandEquipBond__Filter_b__4_0__, 0);
            return BasicHelper__Any_int__58574768(
                     ActIndividuality,
                     (System_Func_T__bool__o *)v12,
                     (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
          }
        }
      }
    }
LABEL_13:
    sub_21FFECC(this, userEquipEntity);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool CharaGraphListViewPatternGrandEquipBond___Filter_b__4_0(
        CharaGraphListViewPatternGrandEquipBond_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *individuality; // x0

  if ( (byte_5933207 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_5933207 = 1;
  }
  individuality = this->fields.individuality;
  if ( !individuality )
    sub_21FFECC(0, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           individuality,
           x,
           (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}