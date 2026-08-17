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

  dropEffectId = (DropAddEntity_o *)(unsigned int)this->fields.dropEffectId;
  entity = 0;
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
    sub_2213CDC(dropEffectId, dropAddMaster);
  }
  return (int)dropEffectId;
}


DropInfo_SaveData_o *DropInfo__GetSaveData(DropInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  bool isRateUp; // w8
  DropInfo_SaveData_o *result; // x0
  bool isAdd; // w9
  __int64 v9; // d0

  if ( (byte_597033A & 1) == 0 )
  {
    sub_2213A60(&DropInfo_SaveData_TypeInfo);
    byte_597033A = 1;
  }
  v3 = sub_2213CCC(DropInfo_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  isRateUp = this->fields.isRateUp;
  result = (DropInfo_SaveData_o *)v3;
  isAdd = this->fields.isAdd;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)&this->fields.type;
  v9 = *(_QWORD *)&this->fields.lv;
  *(_BYTE *)(v3 + 40) = isRateUp;
  *(_BYTE *)(v3 + 52) = isAdd;
  *(_QWORD *)(v3 + 32) = v9;
  *(_QWORD *)(v3 + 44) = *(_QWORD *)&this->fields.originalNum;
  return result;
}


bool DropInfo__IsDropDefaultParticleDisable(
        DropInfo_o *this,
        DropAddMaster_o *dropAddMaster,
        int32_t eventId,
        const MethodInfo *method)
{
  DropAddEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  if ( !dropAddMaster )
    goto LABEL_7;
  if ( !DropAddMaster__TryGetEntity(dropAddMaster, &entity, eventId, this->fields.mstGiftId, 0) )
    return 0;
  this = (DropInfo_o *)entity;
  if ( !entity )
LABEL_7:
    sub_2213CDC(this, dropAddMaster);
  return DropAddEntity__IsDropDefaultParticleDisable(entity, 0);
}


void DropInfo__SetDataFromSaveData(DropInfo_o *this, DropInfo_SaveData_o *saveData, const MethodInfo *method)
{
  bool isRateUp; // w8
  bool isAdd; // w9
  __int64 v5; // d0

  if ( !saveData )
    sub_2213CDC(this, 0);
  isRateUp = saveData->fields.isRateUp;
  isAdd = saveData->fields.isAdd;
  *(_OWORD *)&this->fields.type = *(_OWORD *)&saveData->fields.type;
  v5 = *(_QWORD *)&saveData->fields.lv;
  this->fields.isRateUp = isRateUp;
  this->fields.isAdd = isAdd;
  *(_QWORD *)&this->fields.lv = v5;
  *(_QWORD *)&this->fields.originalNum = *(_QWORD *)&saveData->fields.originalNum;
}


int32_t DropInfo__get_DropEffectId(DropInfo_o *this, const MethodInfo *method)
{
  return this->fields.dropEffectId;
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