void DropInfo___ctor(DropInfo_o *this, const MethodInfo *method)
{
  this->fields.dropEffectId = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t DropInfo__GetDropEffectId(
        DropInfo_o *this,
        DropAddMaster_o *dropAddMaster,
        int32_t eventId,
        const MethodInfo *method)
{
  DropAddEntity_o *dropEffectId; // x0
  DropAddEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0;
  dropEffectId = (DropAddEntity_o *)(unsigned int)this->fields.dropEffectId;
  if ( ((unsigned int)dropEffectId & 0x80000000) != 0 )
  {
    if ( dropAddMaster )
    {
      if ( !DropAddMaster__TryGetEntity(dropAddMaster, &entity, eventId, this->fields.mstGiftId, 0) )
      {
        LODWORD(dropEffectId) = 0;
        goto LABEL_7;
      }
      dropEffectId = entity;
      if ( entity )
      {
        LODWORD(dropEffectId) = DropAddEntity__GetDropEffectId(entity, 0);
LABEL_7:
        this->fields.dropEffectId = (int)dropEffectId;
        return (int)dropEffectId;
      }
    }
    sub_1C71608(dropEffectId, dropAddMaster);
  }
  return (int)dropEffectId;
}


DropInfo_SaveData_o *DropInfo__GetSaveData(DropInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  DropInfo_SaveData_o *result; // x0

  if ( (byte_4CC6EFB & 1) == 0 )
  {
    sub_1C713B0(&DropInfo_SaveData_TypeInfo);
    byte_4CC6EFB = 1;
  }
  v3 = sub_1C715FC(DropInfo_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C71608(v4, v5);
  result = (DropInfo_SaveData_o *)v3;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)&this->fields.type;
  *(_QWORD *)(v3 + 32) = *(_QWORD *)&this->fields.lv;
  *(_BYTE *)(v3 + 40) = this->fields.isRateUp;
  *(_QWORD *)(v3 + 44) = *(_QWORD *)&this->fields.originalNum;
  *(_BYTE *)(v3 + 52) = this->fields.isAdd;
  return result;
}


bool DropInfo__IsDropDefaultParticleDisable(
        DropInfo_o *this,
        DropAddMaster_o *dropAddMaster,
        int32_t eventId,
        const MethodInfo *method)
{
  DropAddEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0;
  if ( !dropAddMaster )
    goto LABEL_7;
  if ( !DropAddMaster__TryGetEntity(dropAddMaster, &entity, eventId, this->fields.mstGiftId, 0) )
    return 0;
  this = (DropInfo_o *)entity;
  if ( !entity )
LABEL_7:
    sub_1C71608(this, dropAddMaster);
  return DropAddEntity__IsDropDefaultParticleDisable(entity, 0);
}


void DropInfo__SetDataFromSaveData(DropInfo_o *this, DropInfo_SaveData_o *saveData, const MethodInfo *method)
{
  if ( !saveData )
    sub_1C71608(this, 0);
  *(_OWORD *)&this->fields.type = *(_OWORD *)&saveData->fields.type;
  *(_QWORD *)&this->fields.lv = *(_QWORD *)&saveData->fields.lv;
  this->fields.isRateUp = saveData->fields.isRateUp;
  *(_QWORD *)&this->fields.originalNum = *(_QWORD *)&saveData->fields.originalNum;
  this->fields.isAdd = saveData->fields.isAdd;
}


int32_t DropInfo__get_DropEffectId(DropInfo_o *this, const MethodInfo *method)
{
  return this->fields.dropEffectId;
}


bool DropInfo__isItem(DropInfo_o *this, const MethodInfo *method)
{
  return Gift__IsItem_40699044(this->fields.type, 0);
}


bool DropInfo__isServant(DropInfo_o *this, const MethodInfo *method)
{
  return Gift__IsServant_40699096(this->fields.type, 0);
}


void DropInfo__setNum(DropInfo_o *this, int32_t num, const MethodInfo *method)
{
  this->fields.num = num;
  this->fields.originalNum = num;
}


void DropInfo_SaveData___ctor(DropInfo_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}