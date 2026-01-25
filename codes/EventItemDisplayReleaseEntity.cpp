void EventItemDisplayReleaseEntity___ctor(EventItemDisplayReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE66C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEE66C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventItemDisplayReleaseEntity__CreatePrimaryKey(
        EventItemDisplayReleaseEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


bool EventItemDisplayReleaseEntity__IsCondEnable(EventItemDisplayReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t targetId; // w19
  int32_t condType; // w20

  if ( (byte_4CEE66B & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEE66B = 1;
  }
  condType = this->fields.condType;
  targetId = this->fields.targetId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, targetId, 0, 0, 0, 0);
}