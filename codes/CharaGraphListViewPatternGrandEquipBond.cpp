void __fastcall CharaGraphListViewPatternGrandEquipBond___ctor(
        CharaGraphListViewPatternGrandEquipBond_o *this,
        System_Int64_array *otherEquipUserSvtIds,
        int64_t selectedEquipUserSvtId,
        int32_t grandSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1

  if ( (byte_4B173AA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, otherEquipUserSvtIds);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantSkillMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, v10);
    sub_1BCAFF8(&DataManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToHashSet_int___, v13);
    byte_4B173AA = 1;
  }
  CharaGraphListViewPatternServantEquip___ctor((CharaGraphListViewPatternServantEquip_o *)this, 0LL);
  this->fields.otherUsedEquipUserSvtId = otherEquipUserSvtIds;
  sub_1BCAF9C(&this->fields.otherUsedEquipUserSvtId);
  this->fields.selectedEquipUserSvtId = selectedEquipUserSvtId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this->fields.svtSkillMaster = (struct ServantSkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  sub_1BCAF9C(&this->fields.svtSkillMaster);
  this->fields.skillMaster = (struct SkillMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
  sub_1BCAF9C(&this->fields.skillMaster);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          grandSvtId,
                          (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCB254(Master_object, v15);
  }
  this->fields.individuality = (struct System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__ToHashSet_int_(
                                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)Master_object[11].klass,
                                                                                     (const MethodInfo_305B6E8 *)Method_System_Linq_Enumerable_ToHashSet_int___);
  sub_1BCAF9C(&this->fields.individuality);
}


bool __fastcall CharaGraphListViewPatternGrandEquipBond__Filter(
        CharaGraphListViewPatternGrandEquipBond_o *this,
        UserServantEntity_o *userEquipEntity,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *klass; // x21
  ServantSkillMaster_o *monitor; // x22
  __int64 v11; // x20
  __int64 v12; // x23
  System_Int32_array *ActIndividuality; // x20
  System_Func_int__bool__o *v14; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v4 = (Il2CppObject *)this;
  if ( (byte_4B173AB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_int____76918080, userEquipEntity);
    sub_1BCAFF8(&Method_CharaGraphListViewPatternGrandEquipBond__Filter_b__4_0__, v5);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&System_Func_int__bool__TypeInfo, v7);
    this = (CharaGraphListViewPatternGrandEquipBond_o *)sub_1BCAFF8(
                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                          v8);
    byte_4B173AB = 1;
  }
  if ( !userEquipEntity )
    goto LABEL_13;
  if ( UserServantEntity__IsFriendShipSvtEquip(userEquipEntity, 0LL) )
  {
    monitor = (ServantSkillMaster_o *)v4[4].monitor;
    klass = (DataMasterBase_TMaster__TEntity__PKType__o *)v4[5].klass;
    v12 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&userEquipEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v12;
    *(_QWORD *)&v16.fields.fakeValue = v11;
    this = (CharaGraphListViewPatternGrandEquipBond_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                          v16,
                                                          0LL);
    if ( monitor )
    {
      this = (CharaGraphListViewPatternGrandEquipBond_o *)ServantSkillMaster__GetEntity(
                                                            monitor,
                                                            (int32_t)this,
                                                            1,
                                                            1,
                                                            0LL);
      if ( this )
      {
        if ( klass )
        {
          this = (CharaGraphListViewPatternGrandEquipBond_o *)DataMasterBase_object__object__int___GetEntity(
                                                                klass,
                                                                HIDWORD(this->fields._RootInfo_k__BackingField),
                                                                (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( this )
          {
            ActIndividuality = SkillEntity__getActIndividuality((SkillEntity_o *)this, 0LL);
            v14 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(v14, v4, Method_CharaGraphListViewPatternGrandEquipBond__Filter_b__4_0__, 0LL);
            return BasicHelper__Any_int__50347164(
                     ActIndividuality,
                     (System_Func_T__bool__o *)v14,
                     (const MethodInfo_3003C9C *)Method_BasicHelper_Any_int____76918080);
          }
        }
      }
    }
LABEL_13:
    sub_1BCB254(this, userEquipEntity);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CharaGraphListViewPatternGrandEquipBond___Filter_b__4_0(
        CharaGraphListViewPatternGrandEquipBond_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *individuality; // x0

  if ( (byte_4B173AC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&x);
    byte_4B173AC = 1;
  }
  individuality = this->fields.individuality;
  if ( !individuality )
    sub_1BCB254(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           individuality,
           x,
           (const MethodInfo_357130C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}