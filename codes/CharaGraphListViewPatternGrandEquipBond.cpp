// local variable allocation has failed, the output may be wrong!
void CharaGraphListViewPatternGrandEquipBond___ctor(
        CharaGraphListViewPatternGrandEquipBond_o *this,
        System_Int64_array *otherEquipUserSvtIds,
        GrandServantListSlotData_o *grandSvtSlotData,
        int32_t grandSvtId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1

  if ( (byte_4C220B2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToHashSet_int___);
    byte_4C220B2 = 1;
  }
  CharaGraphListViewPatternGrandEquipNormal___ctor(
    (CharaGraphListViewPatternGrandEquipNormal_o *)this,
    otherEquipUserSvtIds,
    grandSvtSlotData,
    *(const MethodInfo **)&grandSvtId);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this->fields.svtSkillMaster = (struct ServantSkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantSkillMaster___);
  sub_1C2D434(&this->fields.svtSkillMaster);
  this->fields.skillMaster = (struct SkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
  sub_1C2D434(&this->fields.skillMaster);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          grandSvtId,
                          (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1C2D6EC(Master_object, v10);
  }
  this->fields.individuality = (struct System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__ToHashSet_int_(
                                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Master_object[11].klass,
                                                                                     (const MethodInfo_3112818 *)Method_System_Linq_Enumerable_ToHashSet_int___);
  sub_1C2D434(&this->fields.individuality);
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
  if ( (byte_4C220B3 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_int____77996856);
    sub_1C2D490(&Method_CharaGraphListViewPatternGrandEquipBond__Filter_b__4_0__);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    this = (CharaGraphListViewPatternGrandEquipBond_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C220B3 = 1;
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
    this = (CharaGraphListViewPatternGrandEquipBond_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
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
                                                                (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( this )
          {
            ActIndividuality = SkillEntity__getActIndividuality((SkillEntity_o *)this, 0);
            v10 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(v10, v4, Method_CharaGraphListViewPatternGrandEquipBond__Filter_b__4_0__, 0);
            return BasicHelper__Any_int__51083888(
                     ActIndividuality,
                     (System_Func_T__bool__o *)v10,
                     (const MethodInfo_30B7A70 *)Method_BasicHelper_Any_int____77996856);
          }
        }
      }
    }
LABEL_13:
    sub_1C2D6EC(this, userEquipEntity);
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

  if ( (byte_4C220B4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C220B4 = 1;
  }
  individuality = this->fields.individuality;
  if ( !individuality )
    sub_1C2D6EC(0, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           individuality,
           x,
           (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}