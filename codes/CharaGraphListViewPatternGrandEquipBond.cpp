// local variable allocation has failed, the output may be wrong!
void CharaGraphListViewPatternGrandEquipBond___ctor(
        CharaGraphListViewPatternGrandEquipBond_o *this,
        System_Int64_array *otherEquipUserSvtIds,
        GrandServantListSlotData_o *grandSvtSlotData,
        int32_t grandSvtId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  Il2CppObject *v10; // x0
  Il2CppObject *Entity; // x0
  struct System_Collections_Generic_HashSet_int__o *v12; // x0

  if ( (byte_4C32781 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToHashSet_int___);
    byte_4C32781 = 1;
  }
  CharaGraphListViewPatternGrandEquipNormal___ctor(
    (CharaGraphListViewPatternGrandEquipNormal_o *)this,
    otherEquipUserSvtIds,
    grandSvtSlotData,
    *(const MethodInfo **)&grandSvtId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantSkillMaster___);
  this->fields.svtSkillMaster = (struct ServantSkillMaster_o *)Master_object;
  sub_1C32BC4(&this->fields.svtSkillMaster, Master_object);
  v10 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillMaster___);
  this->fields.skillMaster = (struct SkillMaster_o *)v10;
  sub_1C32BC4(&this->fields.skillMaster, v10);
  Entity = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Entity
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Entity,
                   grandSvtId,
                   (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1C32E7C(Entity);
  }
  v12 = (struct System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__ToHashSet_int_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)Entity[11].klass,
                                                              (const MethodInfo_31212B8 *)Method_System_Linq_Enumerable_ToHashSet_int___);
  this->fields.individuality = v12;
  sub_1C32BC4(&this->fields.individuality, v12);
}


bool CharaGraphListViewPatternGrandEquipBond__Filter(
        CharaGraphListViewPatternGrandEquipBond_o *this,
        UserServantEntity_o *userEquipEntity,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *klass; // x21
  ServantSkillMaster_o *monitor; // x22
  __int64 v7; // x20
  __int64 v8; // x23
  System_Int32_array *ActIndividuality; // x20
  System_Func_int__bool__o *v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v4 = (Il2CppObject *)this;
  if ( (byte_4C32782 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&Method_CharaGraphListViewPatternGrandEquipBond__Filter_b__4_0__);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    this = (CharaGraphListViewPatternGrandEquipBond_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C32782 = 1;
  }
  if ( !userEquipEntity )
    goto LABEL_13;
  if ( UserServantEntity__IsFriendShipSvtEquip(userEquipEntity, 0) )
  {
    monitor = (ServantSkillMaster_o *)v4[4].monitor;
    klass = (DataMasterBase_TMaster__TEntity__PKType__o *)v4[5].klass;
    v8 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v12.fields.currentCryptoKey = v8;
    *(_QWORD *)&v12.fields.fakeValue = v7;
    this = (CharaGraphListViewPatternGrandEquipBond_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                          v12,
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
                                                                (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( this )
          {
            ActIndividuality = SkillEntity__getActIndividuality((SkillEntity_o *)this, 0);
            v10 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(v10, v4, Method_CharaGraphListViewPatternGrandEquipBond__Filter_b__4_0__, 0);
            return BasicHelper__Any_int__51143952(
                     ActIndividuality,
                     (System_Func_T__bool__o *)v10,
                     (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168);
          }
        }
      }
    }
LABEL_13:
    sub_1C32E7C(this);
  }
  return 0;
}


bool CharaGraphListViewPatternGrandEquipBond___Filter_b__4_0(
        CharaGraphListViewPatternGrandEquipBond_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *individuality; // x0

  if ( (byte_4C32783 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C32783 = 1;
  }
  individuality = this->fields.individuality;
  if ( !individuality )
    sub_1C32E7C(0);
  return System_Collections_Generic_HashSet_int___Contains(
           individuality,
           x,
           (const MethodInfo_3649914 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}